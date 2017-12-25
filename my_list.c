#include <stdio.h>
#include <stdlib.h>
#include "my_type.h"
#include "my_list.h"

node *get_last_node(node** my_list)
{
    node *current = *my_list;
    while (current -> next != NULL)
        current = current -> next;
    return current;
}

node *get_node(node** my_list, int element)
{
    int i;
    int length = length_list(my_list);
    node *current = *my_list;
    if (*my_list == NULL)
    {
        puts("Empty list");
        return current;
    }
    else if(element > length)
    {
        puts("Out of range");
        return current = NULL;
    }
    else if (current == NULL)
    {
        puts("This element doesn't exist");
        return current;
    }
    for(i = 0; i != element; ++i)
    {
        current = current -> next;
    }
    return current;
}

my_type *get_data(node* target) {
    return &target->data;
}

void add_to_head(node** my_list)
{
    node *new_node = (node*) malloc(sizeof(node));
    new_node->next = NULL;
    new_node->prev = NULL;
    if (*my_list == NULL)
        *my_list = new_node;
    else
    {
        new_node -> next = *my_list;
        (*my_list) -> prev = new_node;
        *my_list = new_node;
    }
}

void add_to_tail(node** my_list)
{
    node *new_node = (node*) malloc(sizeof(node));
    new_node->next = NULL;
    new_node->prev = NULL;
    if (*my_list == NULL)
        *my_list = new_node;
    else
    {
        node *last = get_last_node(my_list);
        last -> next = new_node;
        new_node -> prev = last;
    }
}

my_type remove_from_head(node** my_list)
{
    node *current = *my_list;
    my_type result;
    if (*my_list == NULL)
    {
        puts("nothing to do here");
        return;
    }
    else
    {
        *my_list = current -> next;
        (*my_list) -> prev = NULL;
    }
    result = current -> data;
    free(current);
    return result;
}

my_type remove_from_tail(node** my_list)
{
    node *current = get_last_node(my_list), *last;
    my_type result;
    if (*my_list == NULL)
    {
        puts("nothing to do here");
        return;
    }
    else
    {
        last = current -> prev;
        last -> next = NULL;
    }
    result = current -> data;
    free(current);
    return result;
}

my_type remove_element(node** my_list, int element)
{
    int len = length_list(my_list);
    node *current = get_node(my_list, element);
    my_type result;
    if (*my_list == NULL)
    {
        puts("nothing to do here");
        return;
    }
    else if(element == len){
        return remove_from_tail(my_list);
    }
    else if (element == 1)
        return remove_from_head(my_list);
    else
    {
        if(current != NULL)
        {
            node *next = current -> prev;
            node *prev = current -> next;
            next -> next = prev;
            prev -> prev = next;
            result = current -> data;
            free(current);
            return result;
        }
        else
        {
            puts("Empty elemen");
            return result;
        }
    }
}

void print_from_head(node** my_list)
{
    if (*my_list == NULL)
        puts("Empty list");
    else
    {
        node *current = *my_list;
        while (current != NULL)
        {
            print_data(current -> data);
            current = current -> next;
        }
    }
}

void print_from_tail(node** my_list)
{
    if (*my_list == NULL)
        puts("Empty list");
    else
    {
        node *current = get_last_node(my_list);
        while (current != NULL)
        {
            print_data(current -> data);
            current = current -> prev;
        }
    }
}

int length_list (node** my_list)
{
    int counter = 0;
    node *tmp = *my_list;
    while(tmp -> next != NULL)
    {
        tmp = tmp -> next;
        counter++;
    }
    return counter;
}
