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

DoublyList *last_item(DoublyList *l) {
    DoublyList *aux = l;

    if (aux == NULL) {return aux;}

    for(; aux->next != NULL; aux = aux->next);
    return aux;
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