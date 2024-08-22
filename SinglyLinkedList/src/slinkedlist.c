#include "slinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct s_linked_list {
    int data;
    struct s_linked_list *next;
};

List *invert_list(List *l) {
    List *inverted_list; create_list(&inverted_list);

    for(List *aux = l; aux!=NULL; aux = aux->next) {
        insert_beginning(aux->data, &inverted_list);
    }

    return inverted_list;
}

List *copy_list(List *l) {
    List *copy_list;
    List *aux;

    create_list(&copy_list);
    create_list(&aux);

    for(List *curr = l; curr != NULL; curr = curr->next) {
        insert_beginning(curr->data, &aux);
    }

    for(List *curr = aux; curr != NULL; curr = curr->next) {
        insert_beginning(curr->data, &copy_list);
    }

    free_list(&aux);

    return copy_list;
}

void insert_beginning(int element, List **l) {
    List *aux = *l;
    List *new = (List *) malloc(sizeof(List));

    if(new == NULL) {
        puts("Unable to allocate memory");
        return -1;
    }

    new->data = element;
    new->next = aux;
    *l = new;
}

void show_list(List *l) {
    for(List *aux = l; aux!=NULL; aux = aux->next) {
        printf("%d\n", aux->data);
    }
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


void create_list(List **l) {
    *l = 0;
}