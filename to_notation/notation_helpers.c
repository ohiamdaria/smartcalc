#include "notation.h"

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

char *change_functions_in_str(char *str) {
    if (*str == 'l') {
        *str++ = ' ';
        if (*str == 'o')
            *str++ = ' ';
    } else {
        *str++ = ' ';
        str++;
    while(*str != ' ')
        *str++ = ' ';
    while(str && *str == ' ')
        str--;
    }
    return str;
}

char *add_current_symbol(char *str_output, char current_symbol) {
    *str_output++ = current_symbol;
    *str_output++ = ' ';
    return str_output;
}

char *add_from_stack(char *str, char *str_output, Stack *stack, int cases) {
    if (peek(stack) > 0) {
        char current_symbol = pop(stack);
        if (peek(stack) == 0 && cases == 1)
            *str_output++ = current_symbol;
        while(peek(stack) > 0 && current_symbol != '(') {
            if (cases < check_priority(current_symbol) && cases != 1)
                break;
            str_output = add_current_symbol(str_output, current_symbol);
            current_symbol = pop(stack);
        }
        if (cases == 1) {
            if (current_symbol > 96 && current_symbol < 120)
                str_output = add_current_symbol(str_output, current_symbol);
        } else if (cases > 1 && cases < 5) {
            push(stack, current_symbol);
            push(stack, *str);
        }
    }
    return str_output;
}

char *add_numbers(char *str, char *str_output) {
    while(*str != ' ' && str)
        *str_output++ = *str++;
    *str_output++ = ' ';
    return str_output;
}

int check_unary_minus(char *str) {
    int status = 0; // yes
    str--;
    while(*str == ' ') str--;
    int check_before = check_priority(*str);
    str++;
    while(*str != '-' || *str == ' ') str++;
    int check_after = check_priority(*str);
    if (check_before != check_after) 
        status = 1; // no
    return status;
}

int check_priority(char k) {
    int check = -1;
    if (k == '(' || k == ')') check = 0;
    else if (k == '+' || k == '-') check = 3;
    else if (k == '*' || k == '/' || k == 'm') check = 2;
    else if (k == '^') check = 2;
    else if (k > 96 && k < 120) check = 1;
    else if (k > 47 && k < 58 || k == 'x') check = 5;
    return check;
}
