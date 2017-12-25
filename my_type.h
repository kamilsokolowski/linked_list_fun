#ifndef MY_TYPE_H_INCLUDED
#define MY_TYPE_H_INCLUDED

typedef struct my_type {
    int type;
    union {
        int intiger;
        float floater;
        double doubler;
        char *word;
    }data;
} my_type;

void set_data (my_type*, int);
void print_data (my_type);
int get_int (my_type*);
float get_float (my_type*);
double get_double (my_type*);
char *get_string (my_type*);

#endif // MY_TYPE_H_INCLUDED
