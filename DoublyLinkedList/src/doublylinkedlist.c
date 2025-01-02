#include "doublylinkedlist.h"

#include <stdlib.h>
#include <stdio.h>

struct doubly_linked_list {
    struct doubly_linked_list *prev;
    int data;
    struct doubly_linked_list *next;
};

DoublyList *create_list(void) {
    return NULL;
}

DoublyList *copy_list(DoublyList *l) {
    DoublyList *res = create_list();

    for(DoublyList *aux = l; aux != NULL; aux = aux->next) {
        insert_end(&res, aux->data);
    }

    return res;
}

DoublyList *invert_list(DoublyList *l) {
    DoublyList *res = create_list();

    for(DoublyList *aux = l; aux != NULL; aux = aux->next) {
        insert_beginning(&res, aux->data);
    }

    return res;
}

DoublyList *last_item(DoublyList *l) {
    DoublyList *aux = l;

    if (aux == NULL) {return aux;}

    for(; aux->next != NULL; aux = aux->next);
    return aux;
}

DoublyList *concat(DoublyList *l1, DoublyList *l2) {
    DoublyList *concatenated = copy_list(l1);
    for(DoublyList *aux = concatenated; aux != NULL; aux = aux->next) {
        if(aux->next == NULL) {
            aux->next = copy_list(l2);
            return concatenated;
        }
    }
}

DoublyList *separates_in_n(DoublyList **l, int n) {
    DoublyList *res;
    for(DoublyList *aux = *l; aux != NULL; aux = aux->next) {
        if(aux->data == n) {
            res = aux->next;
            res->prev = NULL;
            aux->next = NULL;
            return res;
        }
    }
}

void remove_all_n(DoublyList **l, int n) {
    DoublyList *aux = *l;

    // First element
    if(aux->data == n) {
        DoublyList *to_free = aux;
        *l = aux->next;
        aux->next->prev = NULL;
        free(to_free);
    }

    for(aux = *l; aux != NULL; aux = aux->next) {
        if(aux->data == n) {
            DoublyList *to_free = aux;
            aux->prev->next = aux->next;
            if(aux->next != NULL) {
                aux->next->prev = aux->prev;
            }
            free(to_free);
        }
    }
}

void remove_f_n(DoublyList **l, int n) {
    DoublyList *aux = *l;

    // First element
    if(aux->data == n) {
        DoublyList *to_free = aux;
        *l = aux->next;
        aux->next->prev = NULL;
        free(to_free);
        return;
    }

    for(; aux != NULL; aux = aux->next) {
        if(aux->data == n) {
            DoublyList *to_free = aux;
            aux->prev->next = aux->next;
            aux->next->prev = aux->prev;
            free(to_free);
            return;
        }
    }
}

void insert_beginning(DoublyList **l, int n) {
    DoublyList *aux = *l;
    DoublyList *new = (DoublyList *) malloc(sizeof(DoublyList));

    if (new == NULL) {
        printf("Unnable to allocate memory");
        return;
    }

    new->data = n;
    new->next = aux;
    new->prev = NULL;

    if (aux != NULL) {
        aux->prev = new;
    }

    *l = new;
}

void insert_end(DoublyList **l, int n) {
    if ((*l) == NULL) {
        insert_beginning(l, n);
        return;
    }

    DoublyList *last = last_item(*l);
    DoublyList *new = (DoublyList *) malloc(sizeof(DoublyList));

    if (new == NULL) {
        printf("Unnable to allocate memory");
        return;
    }

    new->data = n;
    new->next = last->next;
    new->prev = last;
    last->next = new;
}

void show_list(DoublyList *l) {
    for(DoublyList *aux = l; aux != NULL; aux = aux->next) {
        printf("%d ", aux->data);
    }
    printf("\n");
}

void free_list(DoublyList **l) {
    DoublyList *curr = *l, *next;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    
    *l = NULL;
}

int is_equal(DoublyList *l1, DoublyList *l2) {
    if(len(l1) != len(l2)) {return 0;}

    DoublyList *aux1 = l1, *aux2 = l2;
    
    while (aux1 != NULL) {
        if(aux1->data != aux2->data) {return 0;}

        aux1 = aux1->next;
        aux2 = aux2->next;
    }

    return 1;
}

int greater_than(DoublyList *l, int n) {
    int res = 0;

    for (DoublyList *aux = l; aux != NULL; aux = aux->next) {
        if(aux->data > n) {res++;}
    }
    
    return res++;
}

int len(DoublyList *l) {
    int count = 0;

    for(DoublyList *aux = l; aux != NULL; aux = aux->next) {
        count++;
    }

    return count;
}