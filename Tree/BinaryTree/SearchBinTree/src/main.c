#include "searchbinarytree.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    Knot *arvore = create_knot();

    arvore = insert_knot(arvore, 10);
    arvore = insert_knot(arvore, 8);
    arvore = insert_knot(arvore, 6);
    arvore = insert_knot(arvore, 12);
    arvore = insert_knot(arvore, 14);
    arvore = insert_knot(arvore, 9);

    show_tree_pre(arvore);
    puts("");
    printf("%d\n", tree_height(arvore));

    return 0;
}