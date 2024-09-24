#include "doublylinkedlist.h"

#include <stdio.h>

int main(void) {
    while (1) {
    
        DoublyList *l1 = create_list();

        for(int i = 10; i > 0; i--) {
            insert_end(&l1, i);
        }

        show_list(l1);

        DoublyList *l1copy = copy_list(l1);
        show_list(l1copy);

        DoublyList *l1inverted = invert_list(l1);
        show_list(l1inverted);

        remove_f_n(&l1inverted, 5);
        show_list(l1inverted);

        free_list(&l1);
        free_list(&l1copy);
        free_list(&l1inverted);

        break;
    }

    return 0;
}