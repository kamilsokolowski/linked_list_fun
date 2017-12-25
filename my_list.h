#ifndef MY_LIST_H_INCLUDED
#define MY_LIST_H_INCLUDED

typedef struct node
{
    my_type data;
    struct node *next;
    struct node *prev;
} node;

node *get_last_node(node**);
node *get_node(node**, int);
void add_to_head(node**, int);
void add_to_tail(node**, int);
my_type remove_from_head(node**);
my_type remove_from_tail(node**);
my_type remove_element(node**, int);
void print_from_head(node**);
void print_from_tail(node**);
int length_list (node**);

#endif // MY_LIST_H_INCLUDED
