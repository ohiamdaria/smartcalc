#ifndef S21_SMARTCALC_H_
#define S21_SMARTCALC_H_

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 256

typedef struct {
    char a[N];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack;

#define OK 0
#define ARITHM_ERROR 1


// working with stack
void init_stack(Stack *st);
char pop(Stack *st);
void push(Stack *st, int data);
int peek(Stack* head);
void print(Stack *st);

// for parser
void parser(char *str, char *str_output, Stack *stack);
int check_priority(char k);
void parser_numbers(char *str, char *str_output);
char rename_function(char *str);

#endif // S21_SMARTCALC
