#include <stdlib.h>
#include <stdio.h>
#include "my_type.h"

void set_data_by_user(my_type* Var, int option)
{
    switch(option)
    {
    case 0:
        Var->type = 0;
        scanf("%d", &Var->data.intiger);
        break;
    case 1:
        Var->type = 1;
        scanf("%f", &Var->data.floater);
        break;
    case 2:
        Var->type = 2;
        scanf("%lf", &Var->data.doubler);
        break;
    case 3:
        Var->type = 3;
        char *buff = (char*) malloc(sizeof(char)*255);
        scanf("%s", buff);
        Var->data.word = buff;
        buff = NULL;
        free(buff);
        break;
    default:
        puts("My_type: error 1");
        break;
    }
}

void print_data (my_type Var)
{
    switch(Var.type)
    {
    case 0:
        printf("%d ", Var.data.intiger);
        break;
    case 1:
        printf("%f ", Var.data.floater);
        break;
    case 2:
        printf("%.2f ", Var.data.doubler);
        break;
    case 3:
        printf("%s ", Var.data.word);
        break;
    default:
        puts("My_type: error 2");
        break;
    }
}

int get_int (my_type Var)
{
    return Var.data.intiger;
}

float get_float (my_type Var)
{
    return Var.data.floater;
}

double get_double (my_type Var)
{
    return Var.data.doubler;
}

char *get_word (my_type Var)
{
    return Var.data.word;
}

void set_int (my_type *Var, int value)
{
    Var->type = 0;
    Var->data.intiger = value;
}

void set_float (my_type *Var, float value)
{

    Var->type = 1;
    Var->data.floater = value;
}

void set_double (my_type *Var, double value)
{

    Var->type = 2;
    Var->data.doubler = value;
}

void set_word (my_type *Var, char *buff)
{
    Var->type = 3;
    Var->data.word = buff;
}
