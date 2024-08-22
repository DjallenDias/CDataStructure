#include "slinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct s_linked_list {
    int data;
    struct s_linked_list *next;
};

void insert_beginning(int element, List **l) {
    List *aux = *l;
    List *new = (List *) malloc(sizeof(List));
    new->data = element;
    new->next = aux;
    *l = new;
}

void show_list(List *l) {
    for(List *aux = l; aux!=NULL; aux = aux->next) {
        printf("%d\n", aux->data);
    }
}

void freelist(List **l) {
    List *curr = *l, *next;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    //free(*l);
    *l = NULL;
}


void create_list(List **l) {
    *l = 0;
}