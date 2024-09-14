#include "singlylinkedlist.h"

#include <stdio.h>

int main(void) {
    while (1) { // while just to verify memory leak
        SinglyList *list1 = create_list();

        for (int i = 10; i > 2 ; i--) {
            insert_beginning(&list1, i);
        }

        printf("list1: "); show_list(list1);

        printf("N. of greater than 4 in list1: %d\n", greater_than(list1, 4));
        printf("List1 lenght: ");
        printf("%d\n", len(list1));


        SinglyList *last_item1 = last_item(list1);
        printf("List1 last item: "); show_list(last_item1);

        SinglyList *listinvert1;
        listinvert1 = invert_list(list1);
        printf("listinvert1: "); show_list(listinvert1);

        SinglyList *listcopy1;
        listcopy1 = copy_list(list1);
        printf("listcopy1: "); show_list(listcopy1);

        free_list(&list1);
        free_list(&listinvert1);
        free_list(&listcopy1);

        SinglyList *list2 = create_list(), *list3 = create_list();

        for(int i = 0; i < 5; i++) {insert_beginning(&list2, i);}
        printf("List2: "); show_list(list2);

        for(int i = 5; i < 10; i++) {insert_beginning(&list3, i);}
        printf("List3: "); show_list(list3);

        SinglyList *conc_list2_a_3 = concat(list3, list2);
        printf("List3 concatenated with list2: "); show_list(conc_list2_a_3);

        free_list(&list2);
        free_list(&list3);
        free_list(&conc_list2_a_3);

        SinglyList *list4 = create_list();
        insert_beginning(&list4, 4);
        insert_beginning(&list4, 99);
        insert_beginning(&list4, 4);
        insert_beginning(&list4, 11);
        insert_beginning(&list4, 4);

        printf("List4: "); show_list(list4);
        
        SinglyList *remove4_list4 = remove_n(list4, 4);
        printf("List4 without n. 4: "); show_list(remove4_list4);

        free_list(&list4);
        free_list(&remove4_list4);

        SinglyList *list5 = create_list();
        insert_beginning(&list5, 4);
        insert_beginning(&list5, 99);
        insert_beginning(&list5, 11);
        insert_beginning(&list5, 4);

        printf("List5: "); show_list(list5);

        SinglyList *list5_separeted = separates_in_n(&list5, 11);

        printf("List5 separeted on 11: "); show_list(list5_separeted);

        printf("List5: "); show_list(list5);

        free_list(&list5);
        free_list(&list5_separeted);

        SinglyList *list6 = create_list(), *list7 = create_list();

        insert_beginning(&list6, 4);
        insert_beginning(&list6, 11);
        //insert_beginning(&list6, 12);

        insert_beginning(&list7, 4);
        insert_beginning(&list7, 11);
        //insert_beginning(&list7, 11);

        printf("List6: "); show_list(list6);
        printf("List7: "); show_list(list7);

        printf("List6 == List7? %s\n", is_equal(list6, list7) ? "True" : "False");

        free_list(&list6);
        free_list(&list7);

        SinglyList *list8 = create_list(), *list9 = create_list();

        for (int i = 10; i > 5 ; i--) {
            insert_beginning(&list8, i);
        }

        for (int i = 5; i > 0; i--) {
            insert_beginning(&list9, i);
        }

        printf("List8: "); show_list(list8);
        printf("List9: "); show_list(list9);

        SinglyList *l8_merge_l9 = merge_lists(list8, list9);

        printf("List 8 and 9 merged: "); show_list(l8_merge_l9);

        printf("List8: "); show_list(list8);
        printf("List9: "); show_list(list9);

        free_list(&list8);
        free_list(&list9);
        free_list(&l8_merge_l9);        
        break; // comment to enable the loop
    }

    return 0;
}
