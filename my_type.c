#include <stdlib.h>
#include <stdio.h>
#include "my_type.h"

void set_data(my_type* Var, int option){
    switch(option){
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
            puts("My_type: error 2");
            break;
    }
}

void print_data (my_type Var){
    switch(Var.type){
        case 0:
            printf("%d \n", Var.data.intiger);
            break;
        case 1:
            printf("%f \n", Var.data.floater);
            break;
        case 2:
            printf("%.2f \n", Var.data.doubler);
            break;
        case 3:
            printf("%s \n", Var.data.word);
            break;
        default:
            puts("My_type: error 1");
            break;
    }
}

int get_intiger (my_type Var) {
    return Var.data.intiger;
}

float get_floatater (my_type Var) {

    return Var.data.floater;
}

double get_doubler (my_type Var) {
    return Var.data.doubler;
}

char *get_word (my_type Var) {
    return Var.data.word;
}
