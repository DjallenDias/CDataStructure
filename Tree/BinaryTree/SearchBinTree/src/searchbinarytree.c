#include "searchbinarytree.h"

#include <stdio.h>
#include <stdlib.h>

struct t_knot {
    struct t_knot * left_c;
    int info;
    struct t_knot * right_c;
};

Knot *create_knot(void);

void show_tree(Knot *);