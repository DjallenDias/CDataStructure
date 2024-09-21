#include "binarytree.h"

#include <stdio.h>
#include <stdlib.h>

struct t_knot {
    struct t_knot * left_c;
    int info;
    struct t_knot * right_c;
};

Knot *create_empty_tree(void) {
    return NULL;
}

Knot *create_tree(int n, Knot *lc, Knot *rc) {
    Knot *new_knot = (Knot *) malloc(sizeof(Knot));
    new_knot->info = n;
    new_knot->left_c = lc;
    new_knot->right_c = rc;
    return new_knot;
}

Knot *free_tree(Knot *t) {
    if(!is_empty(t)) {
        free_tree(t->left_c);
        free_tree(t->right_c);
        free(t);
    }
    return NULL;
}

int is_empty(Knot *t) {
    return t == NULL;
}

void show_tree(Knot *t) {
    printf("<");
    if (!is_empty(t)) {
        printf("%d ", t->info);
        show_tree(t->left_c);
        show_tree(t->right_c);
    }
    printf(">");
}
