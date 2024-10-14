#include "searchbinarytree.h"

#include <stdio.h>
#include <stdlib.h>

struct t_knot {
    struct t_knot * left_c;
    int info;
    struct t_knot * right_c;
    int bf; // balance factor
};

Knot *create_knot(void) {
    return NULL;
}

/* I don't want to "export" these functions */
Knot *balance_tree(Knot *);
Knot *rotate_left(Knot *);
Knot *rotate_right(Knot *);
int max2(int, int);

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
    root->bf = (tree_height(root->left_c) - tree_height(root->right_c));

    root = balance_tree(root);
    return root;
}

Knot *balance_tree(Knot *root) {
    if (root->bf == 2) {
        if (root->left_c->bf == -1 ) {
            root->left_c = rotate_left(root->left_c);
        }
        root = rotate_right(root);
    }
    if (root->bf == -2) {
        if (root->right_c->bf == 1) {
            root->right_c = rotate_right(root->right_c);
        }
        root = rotate_left(root);
    }
    return root;
}

Knot *rotate_left(Knot *root) {
    Knot *knot;
    knot = root->right_c;
    root->right_c = knot->left_c;
    knot->left_c = root;
    root = knot;
    return root;
}

Knot *rotate_right(Knot *root) {
    Knot *knot;
    knot = root->left_c;
    root->left_c = knot->right_c;
    knot->right_c = root;
    root = knot;
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

int max2(int a, int b) {
    return (a > b) ? a : b;
}

int tree_height(Knot *root) {
    if (root == NULL) {
        return -1;
    } else {
        return (1 + max2(tree_height(root->left_c), tree_height(root->right_c)));
    }
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
        printf("%d\n", root->info);
        printf("%d->left\n", root->info);
        show_tree_pre(root->left_c);
        printf("%d->right\n", root->info);
        show_tree_pre(root->right_c);
    }
}

void show_tree_pos(Knot *root) {
    if (root != NULL) {
        show_tree_pos(root->left_c);
        show_tree_pos(root->right_c);
        printf("%d, ", root->info);
    }
}