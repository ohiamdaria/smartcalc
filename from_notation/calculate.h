#ifndef CALCULATE_H_
#define CALCULATE_H_

#include "../s21_smartcalc.h"
#include "../to_notation/notation.h"

#define ln(x) log(x)

//calc
double calc(char *s, double number);

// working with stack(numbers)
void init_stackn(Stack_number *st);
double popn(Stack_number *st);
void pushn(Stack_number *st, double data);
int peekn(Stack_number* head);
void printn(Stack_number *st);
int check_priority(char k);


#endif // CALCULATE_H_
