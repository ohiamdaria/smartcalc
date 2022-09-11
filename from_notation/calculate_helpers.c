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


// int check_priority(char k) {
//     int check = -1;
//     if (k == '(' || k == ')') check = 0;
//     else if (k == '+' || k == '-') check = 3;
//     else if (k == '*' || k == '/' || k == 'm') check = 2;
//     else if (k == '^') check = 4;
//     else if (k > 96 && k < 120) check = 1;
//     else if (k > 47 && k < 58 || k == 'x') check = 5;
//     return check;
// }

double parser_numbers(char *str) {
    int whole_part = 0.0l;
    double fract_part = 0.0l;
    char wp[256] = "!", fp[256] = "!", *whole_part_str = &wp[1], *fract_part_str = &fp[1];
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

    return fract_part += whole_part;
}
