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
    int error = OK;
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (check == 2 && *str == 'm' || check == 1) {
            // *str = rename_function(str);
            str++;
            while(*str != ' ')
                *str++ = ' ';
            while(str && *str == ' ')
                str--;
        }
        switch(check) {
            case 0:
            case 1: ;
                 if (*str == ')') {     
                    if (peek(stack) > 0) {
                        char current_symbol = ' ';
                        current_symbol = pop(stack);
                    if (peek(stack) == 0)
                        *str_output++ = current_symbol;
                    while(peek(stack) > 0 && current_symbol != '(') {
                        *str_output++ = current_symbol;
                        *str_output++ = ' ';
                        current_symbol = pop(stack);
                    }
                    // if (peek(stack) == 0 && current_symbol == '(')
                    //     error = ARITHM_ERROR;
                    // else 
                    if (current_symbol == 's' || current_symbol == 'c') {
                        *str_output++ = current_symbol;
                        *str_output++ = ' ';
                    }
                    }   
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

// error
char rename_function(char *str) {
    char return_char = ' ', c = ' ';
    str = strtok(str, &c);
    if (!strcmp(str, "sin")) return_char = 's';
    else if (!strcmp(str, "cos")) return_char = 'c';
    else if (!strcmp(str, "tan")) return_char = 't';
    else if (!strcmp(str, "asin")) return_char = 'i';
    else if (!strcmp(str, "acos")) return_char = 'o';
    else if (!strcmp(str, "atan")) return_char = 'a';
    else if (!strcmp(str, "sqrt")) return_char = 'q';
    else if (!strcmp(str, "ln")) return_char = 'n';
    else if (!strcmp(str, "log")) return_char = 'g';
    else if (!strcmp(str, "mod")) return_char = 'm';
    return return_char;
}

int check_priority(char k) {
    int check = -1;
    if (k == '(' || k == ')') check = 0;
    else if (k == '+' || k == '-') check = 3;
    else if (k == '*' || k == '/' || k == 'm') check = 2;
    else if (k == '^') check = 4;
    else if (k == 's' || k == 'c' || k == 'l') check = 1;
    else if (k != ' ') check = 5;

    return check;
}
