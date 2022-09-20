#ifndef CALCULATE_H_
#define CALCULATE_H_

#define ln(x) log(x)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char a[256];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack;

typedef struct {
    double a[256];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack_number;

#define OK 0
#define ARITHM_ERROR 1

//calc
double smart_calc(char *str, double number);
double calc(char *s, double number);
double parser_numbers(char *str);

// working with stack(numbers)
void init_stackn(Stack_number *st);
double popn(Stack_number *st);
void pushn(Stack_number *st, double data);
int peekn(Stack_number* head);
void printn(Stack_number *st);
// int check_priority(char k);

// for notation
void notation(char *str, char *str_output, Stack *stack);
char *add_space_to_str(char *str);
char *from_str_to_notation(char *str);
// helpers
char *change_functions_in_str(char *str);
char *add_current_symbol(char *str_output, char current_symbol);
char *add_from_stack(char *str, char *str_output, Stack *stack, int cases);
char *add_numbers(char *str, char *str_output);
int check_unary_minus(char *str);
int check_unary_plus(char *str);
int check_priority(char k);
//working with stack
void init_stack(Stack *st);
char pop(Stack *st);
void push(Stack *st, int data);
int peek(Stack* head);
void print(Stack *st);
char * add_null_to_str(char *str);

#endif // CALCULATE_H_
