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

void parser(char *str, char *str_output, Stack *stack) {
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (check == 5) {

        }
        switch(check) {
            case 0:
                if (*str == '(') {
                    push(stack, *str);
                } else {
                    char current_symbol = pop(stack);
                    if (peek(stack) == 0)
                        *str_output++ = current_symbol;
                    while(peek(stack) > 0 && current_symbol != '(') {
                        *str_output++ = current_symbol;
                        *str_output++ = ' ';
                        current_symbol = pop(stack);
                    }
                }
                break;
            case 1:
                while(*str != ' ')
                    *str_output++ = *str++;
                *str_output++ = ' ';
                break;
            case 2:  
            case 3:
            case 4: ;
                char for_compare = 0;
                if (peek(stack) > 0)
                    for_compare = pop(stack);
                while (peek(stack) > 0 && check >= check_priority(for_compare) && for_compare != '(') {
                    *str_output++ = for_compare;
                    *str_output++ = ' ';
                    for_compare = pop(stack);
                }
                push(stack, for_compare);
                push(stack, *str);
                break;
            default:
                continue;
                break;

        }
    }
    while(peek(stack) > 0) {
        *str_output++ = pop(stack);
    }
}

int check_priority(char k) {
    int check = -1;
    if (k == '(' || k == ')') check = 0;
    else if (k == '+' || k == '-') check = 3;
    else if (k == '*' || k == '/' || k == 'm') check = 2;
    else if (k == '^') check = 4;
    else if (k == 's') check = 5;
    else if (k != ' ') check = 1;

    return check;
}
