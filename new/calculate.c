#include "calculate.h"

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
    else if (k == '^') check = 2;
    else if (k > 96 && k < 120) check = 1;
    else if ((k > 47 && k < 58) || k == 'x') check = 5;
    return check;
}

double parser_numbers(char *str) {
    double whole_part = 0.0l, fract_part = 0.0l;
    char wp[256] = "!", *whole_part_str = &wp[1];
    while(*str != '.' && *str != ' ')
        *whole_part_str++ = *str++;
    whole_part_str--;

    if (*str++ == '.') {
        int j = -1;
        while(*str != ' ')
            fract_part += (int )(*str++ - '0') * pow(10, j--);
    }

    int i = 0;
    while(*whole_part_str != '!') {
        whole_part += (int) (*whole_part_str - '0') * pow(10, i++);
        whole_part_str--;
    }

    return (whole_part + fract_part);
}

double calc(char *s, double number) {
    double d = 0.0l;;
    double otvet = 0.0l;
    Stack_number num;
    init_stackn(&num);
    while(*s != '\0' && (s)) {
        while(check_priority(*s) == 5 || *s == ' ') {
            if (check_priority(*s) == 5 && *s != 'x') {
                d = parser_numbers(s);
                pushn(&num, d);
                while(*s != ' ') ++s;
            } else if (*s == 'x')
                pushn(&num, number);
            s++;
        }
        if (check_priority(*s) > 0 && check_priority(*s) < 4) {
            if (*s == '+') { otvet = popn(&num) + popn(&num);
            } else if (*s == '-') { otvet = -(popn(&num) - popn(&num));
            } else if (*s == '*') { otvet = popn(&num) * popn(&num);
            } else if (*s == '/') {
                    double d3 = popn(&num), d4 = popn(&num);
                    otvet = d4 / d3;
            } else if (*s == '^') {
                    double d5 = popn(&num),  d6 = popn(&num);
                    otvet = pow(d6, d5);
            } else if (*s == 'i') { otvet = sin(popn(&num));
            } else if (*s == 'o') { otvet = cos(popn(&num));
            } else if (*s == 'a') { otvet = tan(popn(&num));
            } else if (*s == 's') { otvet = asin(popn(&num));
            } else if (*s == 'c') { otvet = acos(popn(&num));
            } else if (*s == 't') { otvet = atan(popn(&num));
            } else if (*s == 'g') { otvet = log(popn(&num));
            } else if (*s == 'q') { otvet = sqrt(popn(&num));
            } else if (*s == 'n') { otvet = ln(popn(&num)); 
            } else if (*s == 'm') { 
                    double d7 = popn(&num),  d8 = popn(&num);
                    printf("here %.6f %.6f", d7, d8);
                    otvet = fmod(d8, d7);
            }
            pushn(&num, otvet);
        }
        s++;
    }
    return otvet;
}

char *change_functions_in_str(char *str) {
    if (*str != 'm') {
    if (*str == 'l') {
        *str++ = ' ';
        if (*str == 'o')
            *str++ = ' ';
    } else {
        *str++ = ' ';
    }
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

void notation(char *str, char *str_output, Stack *stack) {
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (*str == 'm' || check == 1)
            str = change_functions_in_str(str);
        if (check == 0 || check == 1) {
            if (*str == ')') str_output = add_from_stack(str, str_output, stack, 1);
            else
                push(stack, *str);
        } else if (check == 2|| check == 3 || check == 4) {
            str_output = add_from_stack(str, str_output, stack, check);
        } else if (check == 5) {
            str_output = add_numbers(str, str_output);
            while(*str != ' ') str++;
        }
    }
    while(peek(stack) > 0) *str_output++ = pop(stack);
}

char *add_space_to_str(char *str) {
    int i = 2;
    char str_space[514] = "( ";
    while(*str != '\0') {
        if (check_priority(*str) == 5) {
            while((check_priority(*str) == 5 || *str == '.') && (*str != '\0'))
                str_space[i++] = *str++;
        } else if (check_priority(*str) == 1) {
            while((check_priority(*str) == 1 && (*str != '\0')))
                str_space[i++] = *str++;
        } else {
            str_space[i++] = *str++;
        }
        str_space[i++] = ' ';
    }
    str_space[i++] = ')';
    strcpy(str, str_space);
    return str;
}
char *add_null_to_str(char *str) {
    char str_null[514] = "";
    int i = 0;
    while(*str != '\0') {
        if (*str == '-' && check_unary_minus(str))
            str_null[i++] = '0';
        else if (*str == '+' && check_unary_plus(str))
            str_null[i++] = '0';
        str_null[i++] = *str++;
    }
    strcpy(str, str_null);
    return str;
}

int check_unary_minus(char *str) {
    int status = 0; // no
    str--;
    while(*str == ' ') str--;
    char check_before = *str;
    str++;
    while(*str != '-' || *str == ' ') str++;
    char check_after = *str;
    if (check_before == '(' || !check_before)
        status = 1; // yes
    return status;
}

int check_unary_plus(char *str) {
    int status = 0; // no
    str--;
    while(*str == ' ') str--;
    char check_before = *str;
    str++;
    while(*str != '+' || *str == ' ') str++;
    char check_after = *str;
    if (check_before == '(' || !check_before)
        status = 1; // yes
    return status;
}

char *from_str_to_notation(char *str) {
    Stack stack;
    init_stack(&stack);

    char *str_output = (char *)calloc(514, sizeof(char));
    notation(add_space_to_str(add_null_to_str(str)), str_output, &stack);

    return str_output;
}

double smart_calc(char *str, double number) {
    char *strcopy = str;
    double rez = calc(from_str_to_notation(strcopy), number);
    return rez;
}
