#include "singlylinkedlist.h"

#include <stdio.h>

int main() {
    while (1) {
        SinglyList *list1 = create_list();
        
        for(int i = 0; i <= 7; i++) {
            insert_end(&list1, i);
        }

        show_list(list1);

        SinglyList *list1copy = copy_list(list1);
        show_list(list1copy);

        free_list(&list1);
        free_list(&list1copy);
        
        break;
    }
    
    return 0;
}
