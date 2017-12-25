#include <stdio.h>
#include <stdlib.h>
#include "my_type.h"
#include "my_list.h"

int main(void){
    node *geteed;
    node *my_list = NULL;

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
    print_data(remove_element(&my_list,222));
    puts("\n\t");

    print_from_head(&my_list);
    return 0;
}
