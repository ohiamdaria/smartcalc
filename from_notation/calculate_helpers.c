#include "calculate.h"

void init_stackn(Stack_number *st) {
    st->n = 0.0l;
}

double popn(Stack_number *st) {  //вытащить последний эл-т из стека
    double res = st->a[st->n - 1];
    st->n--;
    return res;
}

void pushn(Stack_number *st, double data) {
    st->a[st->n] = data;
    st->n++;
}

int peekn(Stack_number* head) {
    if (head == NULL)
        return 0;
    return head->n;
}

void printn(Stack_number *st) {
    for (unsigned int i = 0; i < st->n; i++)
        printf("i: %d int: %.6lf ", i, st->a[i]);
    printf("\n");
}


int check_priority(char k) {
    int check = -1;
    if (k == '(' || k == ')') check = 0;
    else if (k == '+' || k == '-') check = 3;
    else if (k == '*' || k == '/' || k == 'm') check = 2;
    else if (k == '^') check = 4;
    else if (k > 96 && k < 120) check = 1;
    else if (k > 47 && k < 58 || k == 'x') check = 5;
    return check;
}

