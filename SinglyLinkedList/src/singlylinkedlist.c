#include "singlylinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct singly_linked_list {
    int data;
    struct singly_linked_list *next;
};

SinglyList *create_list(void) {
    return NULL;
}

SinglyList *last_item(SinglyList *l) {
    SinglyList *aux;
    for(aux = l; aux->next != NULL; aux = aux->next);
    return aux;
}

SinglyList *copy_list(SinglyList *l) {
    SinglyList *copy_list = create_list();
    SinglyList *aux = create_list();

    for(SinglyList *curr = l; curr != NULL; curr = curr->next) {
        insert_beginning(&aux, curr->data);
    }

    for(SinglyList *curr = aux; curr != NULL; curr = curr->next) {
        insert_beginning(&copy_list, curr->data);
    }

    free_list(&aux);

    return copy_list;
}

SinglyList *invert_list(SinglyList *l) {
    SinglyList *inverted_list = create_list();

    for(SinglyList *aux = l; aux!=NULL; aux = aux->next) {
        insert_beginning(&inverted_list, aux->data);
    }

    return inverted_list;
}

SinglyList *concat(SinglyList *l1, SinglyList *l2) {
    SinglyList *concatenated = copy_list(l1);
    for(SinglyList *aux = concatenated; aux != NULL; aux = aux->next) {
        if(aux->next == NULL) {
            aux->next = copy_list(l2);
            return concatenated;
        }
    }
}

SinglyList *remove_n(SinglyList *l, int n) {
    SinglyList *res = copy_list(l);
    for(SinglyList *aux = res; aux != NULL; aux = aux->next) {
        if (aux->data == n) {
            if (aux->next != NULL) {
                res = aux->next;
            } else {
                res = NULL;
            }

            free(aux);
            return res;
        }

        if(aux->next->data == n) {
            SinglyList *to_free = aux->next;
            aux->next = aux->next->next;
            free(to_free);
            return res;
        }
    }
}

SinglyList *separates_in_n(SinglyList **l, int n) {
    SinglyList *res;
    for(SinglyList *aux = *l; aux != NULL; aux = aux->next) {
        if(aux->data == n) {
            res = aux->next;
            aux->next = NULL;
            return res;
        }
    }
}

SinglyList *merge_lists(SinglyList *l1, SinglyList *l2) {

}

void insert_beginning(SinglyList **l, int element) {
    SinglyList *aux = *l;
    SinglyList *new = (SinglyList *) malloc(sizeof(SinglyList));

    if(new == NULL) {
        puts("Unable to allocate memory");
    }

    new->data = element;
    new->next = aux;
    *l = new;
}

void show_list(SinglyList *l) {
    for(SinglyList *aux = l; aux!=NULL; aux = aux->next) {
        printf("%d ", aux->data);
    }
    puts("");
}

void free_list(SinglyList **l) {
    SinglyList *curr = *l, *next;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    *l = NULL;
}

int is_equal(SinglyList *l1, SinglyList *l2) {
    if(len(l1) != len(l2)) {return 0;}

    SinglyList *aux1 = l1, *aux2 = l2;
    
    while (aux1 != NULL) {
        if(aux1->data != aux2->data) {return 0;}

        aux1 = aux1->next; aux2 = aux2->next;
    }

    return 1;
}

int greater_than(SinglyList *l, int n) {
    int res = 0;

    for (SinglyList *aux = l; aux != NULL; aux = aux->next) {
        if(aux->data > n) {res++;}
    }
    
    return res++;
}

int len(SinglyList *l) {
    int len = 0;
    for(SinglyList *aux = l; aux != NULL; aux = aux->next) {
        len++;
    }
    return len;
}
