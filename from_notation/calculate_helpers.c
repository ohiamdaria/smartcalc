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