#include "binarytree.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Left sub-tree
    Knot *a1 = create_tree(10, NULL, NULL);
    Knot *a2 = create_tree(9, NULL, a1);

    // Right sub-tree
    Knot *a3 = create_tree(8, NULL, NULL);
    Knot *a4 = create_tree(7, NULL, NULL);
    Knot *a5 = create_tree(6, a3, a4);

    // Main knot
    Knot *a = create_tree(5, a2, a5);

    show_tree(a);
    puts("");

    return 0;
}