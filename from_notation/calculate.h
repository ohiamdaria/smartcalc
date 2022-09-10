#ifndef CALCULATE_H_
#define CALCULATE_H_

#include "../s21_smartcalc.h"

//calc
double calc(char *s);

// working with stack(numbers)
void init_stackn(Stack_number *st);
double popn(Stack_number *st);
void pushn(Stack_number *st, double data);
int peekn(Stack_number* head);
void printn(Stack_number *st);

#endif // CALCULATE_H_
