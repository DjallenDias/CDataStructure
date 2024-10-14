#include "searchbinarytree.h"

#include <stdio.h>
#include <stdlib.h>

struct t_knot {
    struct t_knot * left_c;
    int info;
    struct t_knot * right_c;
};

Knot *create_knot(void) {
    return NULL;
}

void show_tree(Knot *tree) {
    if (tree != NULL) {
        show_tree(tree->left_c);
        printf("%d, ", tree->info);
        show_tree(tree->right_c);
    }
}