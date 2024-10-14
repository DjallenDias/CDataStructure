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

Knot *insert_knot(Knot *root, int number) {
    if (root == NULL) {
        root = (Knot *) malloc(sizeof(Knot));

        root->info = number;
        root->left_c = NULL;
        root->right_c = NULL;
    }
    else if (root->info > number) {
        root->left_c = insert_knot(root->left_c, number);
    }
    else if (root->info < number) {
        root->right_c = insert_knot(root->right_c, number);
    }
    return root;
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

void show_tree_pre(Knot *root) {
    if (root != NULL) {
        printf("%d, ", root->info);
        show_tree(root->left_c);
        show_tree(root->right_c);
    }
}

void show_tree_pos(Knot *root) {
    if (root != NULL) {
        show_tree(root->left_c);
        show_tree(root->right_c);
        printf("%d, ", root->info);
    }
}