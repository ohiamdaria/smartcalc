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

double parser_numbers(char *str) {
    double whole_part = 0.0l;
    double fract_part = 0.0l;
    char wp[256] = "!", *whole_part_str = &wp[1];
    while(*str != '.' && *str != ' ')
        *whole_part_str++ = *str++;
    whole_part_str--;
    
    if (*str == '.') {
        str++;
        int j = -1;
        while(*str != ' ') {
            int get_number = *str++ - '0';
            fract_part += get_number * pow(10, j--);
        }
    }

    int i = 0;
    while(*whole_part_str != '!') {
        int get_number = *whole_part_str - '0';
        whole_part += get_number * pow(10, i++);
        whole_part_str--;
    }
    whole_part += fract_part;

    return whole_part;
}
