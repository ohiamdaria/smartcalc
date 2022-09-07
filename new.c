#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 256

typedef struct {
    char a[N];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack;

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

void parser(char *str, char *str_output, Stack *stack);
int check_priority(char k);

int main() {
    Stack stack;
    init_stack(&stack);
    char meow[256] = "(1 - 3 - 0)";

    char *str = NULL, *str_output = NULL;
    str = (char *)calloc(256, sizeof(char));
    str_output = (char *)calloc(256, sizeof(char));
    strcpy(str, meow);

    parser(str, str_output, &stack);
    printf("str: %s\n", str_output);
    free(str);
    free(str_output);
    return 0;
}

void parser(char *str, char *str_output, Stack *stack) {
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        switch(check) {
            case 0:
                if (*str == '(') {
                    push(stack, *str);
                } else {
                    char current_symbol = pop(stack);
                    if (peek(stack) == 0)
                        *str_output++ = current_symbol;
                    while(peek(stack) > 0 && current_symbol != ')') {
                        *str_output++ = current_symbol;
                        current_symbol = pop(stack);
                    }
                }
                break;
            case 1:
                *str_output++ = *str;
                *str_output++ = ' ';

                break;
            case 2:  
            case 3:
            case 4: ;
                char for_compare = 0;
                for_compare = pop(stack);
                while (peek(stack) > 0 && check >= check_priority(for_compare)) {
                    *str_output = for_compare;
                    for_compare = pop(stack);
                }
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
    else if (k == '*' || k == '/') check = 2;
    else if (k != ' ') check = 1;

    return check;
}