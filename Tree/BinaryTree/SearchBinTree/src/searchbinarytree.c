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

Knot *search_for(Knot *root, int number) {
    if (root != NULL) {
        if (root->info > number) {
            return search_for(root->left_c, number);
        }

        if (root->info < number) {
            return search_for(root->right_c, number);
        }

        return root;
    }
    
    return NULL;
}

void show_tree(Knot *root) {
    if (root != NULL) {
        show_tree(root->left_c);
        printf("%d, ", root->info);
        show_tree(root->right_c);
    }
}