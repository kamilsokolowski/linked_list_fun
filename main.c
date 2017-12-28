#include <stdio.h>
#include <stdlib.h>
#include "my_type.h"
#include "my_list.h"

int main(void)
{
    int i, len, data;
    node **list = (node**) malloc(sizeof(node*));
    node *head = NULL;
    *list = head;
    my_type test;
    node *current;

    puts("\t Custom test");
    char *buff = (char*) malloc(sizeof(char)*255);
    puts("Say something");
    scanf("%s", buff);
    set_word(&test, buff);
    printf("Your word: %s \n", get_word(test));

    puts("How long your list should be ?");
    scanf("%d", &len);

    puts("\t List test");
    // Filling list from tail
    /*
    puts("Filling from tail");

    for(i = 0; i < len; ++i)
        add_to_tail(list);

    for (i = len - 1; i >= 0; --i) {
        current = get_node(list, i);
        if(current)
            set_data_by_user(get_data(current), 0);
        else
            puts("Something goes wrong");
    }
    */
    // Filling list from head

    puts("Filling from head");
    for (i = 0; i < len; ++i)
    {
        add_to_head(list);
        current = get_node(list, 0);
        if(current)
            set_data_by_user(get_data(current), 0);
        else
            puts("Something goes wrong");
    }

    puts("\n\t");
    print_data(remove_element(list, 2));
    print_data(remove_element(list, 3));
    puts("\n What will happen if we try to take not existing node ?");
    test = remove_element(list, 255);
    print_data(test);
    puts("\n\t");

    puts("List: ");;
    puts("Prinitng from tail: ");
    print_from_tail(list);
    puts("\nPrinitng from head: ");
    print_from_head(list);

    return 0;
}
