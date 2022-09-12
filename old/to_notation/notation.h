#ifndef NOTATION_H_
#define NOTATION_H_

#include "../s21_smartcalc.h"
#include "../from_notation/calculate.h"

// for notation
char *from_str_to_notation(char *str);
void notation(char *str, char *str_output, Stack *stack);
// helpers
char *change_functions_in_str(char *str);
char *add_current_symbol(char *str_output, char current_symbol);
char *add_from_stack(char *str, char *str_output, Stack *stack, int cases);
char *add_numbers(char *str, char *str_output);
int check_unary_minus(char *str);
int check_priority(char k);
//working with stack
void init_stack(Stack *st);
char pop(Stack *st);
void push(Stack *st, int data);
int peek(Stack* head);
void print(Stack *st);

#endif // NOTATION_H_