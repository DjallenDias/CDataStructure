#include "slinkedlist.h"

#include <stdio.h>

int main(void) {
    while (1) { // while just to verify memory leak
        List *list1 = create_list();

        for (int i = 10; i > 2 ; i--) {
            insert_beginning(&list1, i);
        }

        printf("list1: ");
        show_list(list1);

        printf("N. of greater than 4 in list1: %d\n", greater_than(list1, 4));

        printf("List1 lenght: ");
        printf("%d\n", len(list1));

        List *last_item1 = last_item(list1);
        printf("List1 last item: ");
        show_list(last_item1);

        printf("listinvert1: ");
        List *listinvert1;

        listinvert1 = invert_list(list1);
        show_list(listinvert1);

        printf("listcopy1: ");
        List *listcopy1;
        listcopy1 = copy_list(list1);

        show_list(listcopy1);

        free_list(&list1);
        free_list(&listinvert1);
        free_list(&listcopy1);

        List *list2 = create_list(), *list3 = create_list();

        for(int i = 0; i < 5; i++) {insert_beginning(&list2, i);}
        printf("List2: "); show_list(list2);

        for(int i = 5; i < 10; i++) {insert_beginning(&list3, i);}
        printf("List3: "); show_list(list3);

        List *conc_list2_a_3 = concat(list3, list2);
        printf("List3 concatenated with list2: ");
        show_list(conc_list2_a_3);

        free_list(&list2);
        free_list(&list3);
        free_list(&conc_list2_a_3);

        List *list4 = create_list();
        insert_beginning(&list4, 4);
        insert_beginning(&list4, 99);
        insert_beginning(&list4, 11);

        printf("List4: "); show_list(list4);
        List *remove_4_list4 = remove_n(list4, 4);
        List *remove_11_list4 = remove_n(list4, 11);
        List *remove_99_list4 = remove_n(list4, 99);
        printf("List4 without 4: "); show_list(remove_4_list4);
        printf("List4 without 11: "); show_list(remove_11_list4);
        printf("List4 without 99: "); show_list(remove_99_list4);

        free_list(&list4);
        free_list(&remove_4_list4);
        free_list(&remove_11_list4);
        free_list(&remove_99_list4);
        break; // comment to enable the loop
    }

    return 0;
}
