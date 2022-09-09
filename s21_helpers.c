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

// stupid change functions from sin to i
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
        if (peek(stack) == 0)
            *str_output++ = current_symbol;
            while(peek(stack) > 0 && current_symbol != '(') {
                str_output = add_current_symbol(str_output, current_symbol);
                current_symbol = pop(stack);
                if (cases == 5 && cases < check_priority(current_symbol))
                    break;
            }
        if (cases == 1) {
            if (current_symbol > 96 && current_symbol < 120)
                str_output = add_current_symbol(str_output, current_symbol);
        } else if (cases == 2 || cases == 3 || cases == 4) {
            push(stack, current_symbol);
            push(stack, *str);
        }
    }
    return str_output;
}

void parser(char *str, char *str_output, Stack *stack) {
    int error = OK;
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (check == 2 && *str == 'm' || check == 1) {
            str = change_functions_in_str(str);
        }
        switch(check) {
            case 0:
            case 1:
                 if (*str == ')') {  
                     str_output = add_from_stack(str, str_output, stack, 1);   
                    // if (peek(stack) == 0 && current_symbol == '(')
                    //     error = ARITHM_ERROR;
                    // else 
                } else {
                    push(stack, *str);
                }
                break;
            case 5:
            // запятая - че с ней делать,,,,,,
                // if (*str == ',') {
                //     char for_compare = 0;
                //     if (peek(stack) > 0)
                //         for_compare = pop(stack);
                //     while (peek(stack) > 0 && for_compare != '(') {
                //         *str_output++ = for_compare;
                //         *str_output++ = ' ';
                //         for_compare = pop(stack);
                //     }
                // } else {
                // printf(" str look like: %c %s\n", *str, str);
                while(*str != ' ' && str)
                    *str_output++ = *str++;
                *str_output++ = ' ';
                break;
            case 2:  
            case 3:
            case 4: ;
                str_output = add_from_stack(str, str_output, stack, check);   // не робит для этих случаев :(
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
    else if (k > 96 && k < 120) check = 1;
    else if (k != ' ' || k == 'x') check = 5;

    return check;
}
