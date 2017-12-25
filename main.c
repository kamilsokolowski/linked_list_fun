#include <stdio.h>
#include <stdlib.h>
#include "my_type.h"
#include "my_list.h"

int main(void)
{
    node *my_list = NULL;
    my_type test;

    puts("\t Custom test");
    char *buff = (char*) malloc(sizeof(char)*255);
    scanf("%s", buff);
    set_word(&test, buff);
    printf("%s", get_word(test));

    puts("\t List test");
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);
    add_to_tail(&my_list, 3);

    puts("\n\t");
    print_data(remove_element(&my_list,2));
    print_data(remove_element(&my_list,5));
    test = remove_element(&my_list,255);
    print_data(test);
    puts("\n\t");

    print_from_head(&my_list);

    return 0;
}
