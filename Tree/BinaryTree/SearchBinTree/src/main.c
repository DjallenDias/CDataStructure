#include "searchbinarytree.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    Knot *arvore = create_knot();

    arvore = insert_knot(arvore, 10);
    arvore = insert_knot(arvore, 8);
    arvore = insert_knot(arvore, 6);
    arvore = insert_knot(arvore, 12);
    arvore = insert_knot(arvore, 9);
    arvore = insert_knot(arvore, 5);
    arvore = insert_knot(arvore, 2);
    arvore = insert_knot(arvore, 4);
    arvore = insert_knot(arvore, 7);
    arvore = insert_knot(arvore, 3);
    arvore = insert_knot(arvore, 1);
    arvore = insert_knot(arvore, 13);
    arvore = insert_knot(arvore, 16);
    arvore = insert_knot(arvore, 14);
    arvore = insert_knot(arvore, 11);

    show_tree_pre(arvore);
    puts("");
    show_tree(arvore);
    puts("");

    show_tree(search_for(arvore, 13));
    puts("");

    return 0;
}