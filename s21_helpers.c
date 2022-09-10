#include "s21_smartcalc.h"

void init_stack(Stack *st) {
    st->n = 0;
}

char pop(Stack *st) {  //вытащить последний эл-т из стека
    char res = st->a[st->n - 1];
    st->n--;
    return res;
}

void push(Stack *st, int data) {
    st->a[st->n] = data;
    st->n++;
}

int peek(Stack* head) {
    if (head == NULL)
        return 0;
    return head->n;
}

void print(Stack *st) {
    for (unsigned int i = 0; i < st->n; i++)
        printf("%c ", st->a[i]);
    printf("\n");
}
