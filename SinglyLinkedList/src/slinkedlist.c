#include "slinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct s_linked_list {
    int data;
    struct s_linked_list *next;
};

List *create_list(void) {
    return NULL;
}

List *last_item(List *l) {
    List *aux;
    for(aux = l; aux->next != NULL; aux = aux->next);
    return aux;
}

List *copy_list(List *l) {
    List *copy_list = create_list();
    List *aux = create_list();

    for(List *curr = l; curr != NULL; curr = curr->next) {
        insert_beginning(&aux, curr->data);
    }

    for(List *curr = aux; curr != NULL; curr = curr->next) {
        insert_beginning(&copy_list, curr->data);
    }

    free_list(&aux);

    return copy_list;
}

List *invert_list(List *l) {
    List *inverted_list = create_list();

    for(List *aux = l; aux!=NULL; aux = aux->next) {
        insert_beginning(&inverted_list, aux->data);
    }

    return inverted_list;
}

List *concat(List *l1, List *l2) {
    List *concatenated = copy_list(l1);
    for(List *aux = concatenated; aux != NULL; aux = aux->next) {
        if(aux->next == NULL) {
            aux->next = copy_list(l2);
            return concatenated;
        }
    }
}

List *remove_n(List *l, int n) {
    List *res = copy_list(l);
    for(List *aux = res; aux != NULL; aux = aux->next) {
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
            List *to_free = aux->next;
            aux->next = aux->next->next;
            free(to_free);
            return res;
        }
    }
}

void insert_beginning(List **l, int element) {
    List *aux = *l;
    List *new = (List *) malloc(sizeof(List));

    if(new == NULL) {
        puts("Unable to allocate memory");
    }

    new->data = element;
    new->next = aux;
    *l = new;
}

void show_list(List *l) {
    for(List *aux = l; aux!=NULL; aux = aux->next) {
        printf("%d ", aux->data);
    }
    puts("");
}

void free_list(List **l) {
    List *curr = *l, *next;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    *l = NULL;
}

int greater_than(List *l, int n) {
    int res = 0;

    for (List *aux = l; aux != NULL; aux = aux->next) {
        if(aux->data > n) {res++;}
    }
    
    return res++;
}

int len(List *l) {
    int len = 0;
    for(List *aux = l; aux != NULL; aux = aux->next) {
        len++;
    }
    return len;
}
