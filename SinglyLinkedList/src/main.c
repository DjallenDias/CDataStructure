#include "singlylinkedlist.h"

#include <stdio.h>

int main() {
    while (1) {
        SinglyList *list1 = create_list();
        for(int i = 0; i <= 7; i++) {
            insert_end(&list1, i);
        }
        insert_end(&list1, 4);
        insert_beginning(&list1, 4);

        show_list(list1);

        remove_f_n(&list1, 4);
        show_list(list1);

        remove_all_n(&list1, 4);
        show_list(list1);

        break;
    }
    
    return 0;
}
