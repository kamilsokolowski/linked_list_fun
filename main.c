#include <stdio.h>
#include <stdlib.h>
#include "my_type.h"
#include "my_list.h"

int main(void)
{
    int i, len = 5, data;

    node *my_list = NULL;
    my_type test;
    node *current;

    puts("\t Custom test");
    char *buff = (char*) malloc(sizeof(char)*255);
    puts("Say something");
    scanf("%s", buff);
    set_word(&test, buff);
    printf("Your word: %s \n", get_word(test));

    puts("\t List test");
    // Filling list from tail
    puts("Filling from tail");

    for(i = 0; i < len; ++i)
        add_to_tail(&my_list);

    for (i = len - 1; i >= 0; --i) {
        current = get_node(&my_list, i);
        puts("Give me number:");
        scanf("%d", &data);
        if(current)
            set_int(get_data(current), data);
        else
            puts("Something goes wrong");
    }
    // Filling list from head
    /*
    puts("Filling from head");
    for (i = 0; i < len; ++i)
    {
        add_to_head(&my_list);
        current = get_node(&my_list, 0);
        puts("Give me number:");
        scanf("%d", &data);
        if(current)
            set_int(get_data(current), data);
        else
            puts("Something goes wrong");
    }
    */
    puts("\n\t");
    print_data(remove_element(&my_list, 2));
    print_data(remove_element(&my_list, 3));
    puts("\n What will happen if we try to take not existing node ?");
    test = remove_element(&my_list,255);
    print_data(test);
    puts("\n\t");

    puts("List: ");;
    puts("Prinitng from tail: ");
    print_from_tail(&my_list);
    puts("\nPrinitng from head: ");
    print_from_head(&my_list);

    return 0;
}
