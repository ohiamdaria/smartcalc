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


double calc(char *s, double number) {
    double d =  0.0l;;
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
        switch(*s) {
            case '+':
                otvet = popn(&num) + popn(&num);
                pushn(&num, otvet);
                break;
            case '-': ;
                double d1 = popn(&num);
                double d2 = popn(&num);
                otvet = d2 - d1;
                pushn(&num, otvet);
                break;
            case '*':
                otvet = popn(&num) * popn(&num);
                pushn(&num, otvet);
                break;
            case '/': ; // null
                double d3 = popn(&num);
                double d4 = popn(&num);
                otvet = d4 / d3;
                pushn(&num, otvet);
                break;
            case '^': ;
                double d5 = popn(&num);
                double d6 = popn(&num);
                otvet = pow(d6, d5);
                pushn(&num, otvet);
                break;
            case 'i': // sin
                otvet = sin(popn(&num));
                pushn(&num, otvet);
                break;
            case 'o': // cos
                otvet = cos(popn(&num));
                pushn(&num, otvet);
                break;
            case 'a':
                otvet = tan(popn(&num));
                pushn(&num, otvet);
                break;
            case 's':
                otvet = asin(popn(&num));
                pushn(&num, otvet);
                break;
            case 'c':
                otvet = acos(popn(&num));
                pushn(&num, otvet);
                break;
            case 't':
                otvet = atan(popn(&num));
                pushn(&num, otvet);
                break;
            case 'g': 
                otvet = log(popn(&num));
                pushn(&num, otvet);
                break;  
            case 'q': // отриц числа
                otvet = sqrt(popn(&num));
                pushn(&num, otvet);
                break;
            case 'n': // отриц числа 
                otvet = ln(popn(&num));
                pushn(&num, otvet);
                break;  
        }
        s++;
    }
    return otvet;
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


void notation(char *str, char *str_output, Stack *stack) {
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (*str == 'm' || check == 1)
            str = change_functions_in_str(str);
        switch(check) {
            case 0:
            case 1:
                if (*str == ')')
                     str_output = add_from_stack(str, str_output, stack, 1);
                else
                    push(stack, *str);
                break;
            case 5:
                str_output = add_numbers(str, str_output);
                while(*str != ' ') str++;
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
    while(peek(stack) > 0) *str_output++ = pop(stack);
}

char *add_space_to_str(char *str) {
    int i = 2;
    char str_space[514] = "( ";
    while(*str != '\0') {
        if (check_priority(*str) == 5) {
            while((check_priority(*str) == 5 || *str == '.') && (*str != '\0'))
                str_space[i++] = *str++;
            str_space[i++] = ' ';
        } else {
            str_space[i++] = *str++;
            str_space[i++] = ' ';
        }
    }
    str_space[i++] = ')';
    strcpy(str, str_space);
    return str;
}

char *from_str_to_notation(char *str) {
    Stack stack;
    init_stack(&stack);

    char *str_output = NULL;
    str_output = (char *)calloc(514, sizeof(char));
    char *str_space = NULL;
    str_space = (char *)calloc(514, sizeof(char));
    str = add_space_to_str(str);
    notation(str, str_output, &stack);

    return str_output;
}

double smart_calc(char *str, double number) {
    double x = number;
    printf("str: %s\n", str);
    char *str_output = from_str_to_notation(str);
    double rez = 0.0l;
    rez = calc(str_output, x);
    return rez;
}
