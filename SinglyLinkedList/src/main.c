#include "slinkedlist.h"

#include <stdio.h>

int main(void) {
    List *list1;
    while (1) { // while just to verify memory leak
        create_list(&list1);

        for (int i = 10; i > 0 ; i--) {
            insert_beginning(i, &list1);
        }

        puts("list1: ");
        show_list(list1);

        puts("listinvert1: ");
        List *listinvert1;

        listinvert1 = invert_list(list1);
        show_list(listinvert1);

        puts("listcopy1: ");
        List *listcopy1;
        listcopy1 = copy_list(list1);

        show_list(listcopy1);

        free_list(&list1);
        free_list(&listinvert1);
        free_list(&listcopy1);

        break; // comment to enable the loop
    }
    return 0;
}
