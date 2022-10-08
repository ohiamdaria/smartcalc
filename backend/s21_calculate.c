#include "s21_calculate.h"

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

// void print(Stack *st) {
//     for (unsigned int i = 0; i < st->n; i++)
//         printf("%c ", st->a[i]);
//     printf("\n");
// }

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

int check_priority(char k) {
    int check = -1;
    if (k == '(' || k == ')') check = 0;
    else if (k == '+' || k == '-') check = 4;
    else if (k == '*' || k == '/' || k == 'm') check = 3;
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

double calc(char *s, data_task_t *data) {
    double d = 0.0l, otvet = 0.0l;
    Stack_number num;
    init_stackn(&num);
    while(*s != '\0' && (s)) {
        while(check_priority(*s) == 5 || *s == ' ') {
            if (check_priority(*s) == 5 && *s != 'x') {
                d = parser_numbers(s);
                pushn(&num, d);
                while(*s != ' ') ++s;
            } else if (*s == 'x')
                pushn(&num, data->x);
            s++;
        }
        if (check_priority(*s) > 0 && check_priority(*s) < 5) {
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
    } else {
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
            // else if (check_priority(current_symbol) > cases) {
                str_output = add_current_symbol(str_output, current_symbol);
                current_symbol = pop(stack);
            // }
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
    int i = 0;
    char str_space[514] = "";
    while(*str != '\0') {
        if (check_priority(*str) == 5) {
            while((check_priority(*str) == 5 || *str == '.') && (*str != '\0'))
                str_space[i++] = *str++;
        } else if (check_priority(*str) == 1) {
            while(check_priority(*str) == 1 && (*str != '\0'))
                str_space[i++] = *str++;
        } else if (*str == 'm') {
            for(int j = 0; j < 3; j++)
                str_space[i++] = *str++;
        } else {
            str_space[i++] = *str++;
        }
        str_space[i++] = ' ';
    }
    strcpy(str, str_space);
    return str;
}
char *add_null_to_str(char *str) {
    char str_null[1024] = "";
    int i = 0;
    while(*str != '\0') {
        if (*str == '-' && check_unary_minus(str) == 1)
            str_null[i++] = '0';
        else if (*str == '+' && check_unary_plus(str) == 1)
            str_null[i++] = '0';
        // if (*str == '+' && check_unary_plus(str) == 2)
        //     str++;
        // else
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
    if ((check_before == '(' && check_after == ')') || !check_before)
        status = 1; // yes
    else if (check_before == '(')
      status = 1;
    // else if ((check_priority(check_before) == 3 || check_priority(check_before) == 4))
    //     status = 1;
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
    if (check_before == '-')
        status = 2;
    else if ((check_before == '(' && check_after == ')') || !check_before)
        status = 1; // yes
    else if (check_before == '(')
      status = 1;
    // else if (check_priority(check_before) == 3 || check_priority(check_before) == 4)
    //     status = 1;
    return status;
}

char *delete_space_str(char *str) {
    char str_output[1024] = "(";
    int i = 1;
    while(*str != '\0') {
        if (*str != ' ')
            str_output[i++] = *str;
        str++;
    }
    str_output[i++] = ')';
    strcpy(str, str_output);
    return str;
}

int count_braces(char *str) {
    char str_check[1024] = "";
    strcpy(str_check, str);

    int count_left = 0, count_right = 0, i = 0;
    while(str_check[i] != '\0') {
        if (str_check[i] == '(') count_left++;
        if (str_check[i] == ')') count_right++;
        i++;
    }

    return (count_left == count_right) ? OK : ERROR;
}

void catch_a_beach(char *str, data_task_t *data) {
  data->code = (strlen(str) == 0 ? ERROR : OK) ||
  count_braces(str) || (strlen(str) < 256 ? OK : ERROR);
}

char *from_str_to_notation(char *str, data_task_t *data) {
    Stack stack;
    init_stack(&stack);
    catch_a_beach(str, data); // find errors :3
    char *str_output = NULL;
    if (!data->code) {
        str_output = (char *)calloc(1024, sizeof(char));
        char *strcopy = delete_space_str(str);
        notation(add_space_to_str(add_null_to_str(strcopy)), str_output, &stack);
        // free(strcopy);
    }
    return str_output;
}

void init_input(data_task_t *data) {
    data->x = 0.0;
    data->result = 0.0;
    data->code = OK;
}

void smart_calc(char *str, data_task_t *data) {
    char *strcopy = from_str_to_notation(str, data);
    if (!data->code) {
        data->result = calc(strcopy, data);
    }
}

// void init_credit(credit_t *credit) {
//     credit->sum = 0.0;
//     credit->prozent = 0.0;
//     credit->year = 0;
//     credit->month = 0;
//     credit->overpayment = 0.0;
//     credit->overpayment_edit = 0.0;
//     credit->result_edit = 0.0;
// }

// double creditcalc(credit_t *credit, double sum, double prozent, int year, int month, int type) {
//     credit->sum = sum;
//     credit->prozent = prozent;
//     credit->year = year;
//     credit->month = month;
//     month += year * 12;
//     double p = (double) prozent / ((double) 100 * (double) 12);
//     if (type == 1) {
//         double overpayment = sum * (p / (1 - (double) 1 / pow(1 + p, month)));
//         credit->overpayment = overpayment;
//         credit->overpayment_edit = overpayment * month - sum;
//         credit->result_edit = overpayment * month;
//     } else {
//         double sn = sum;
//         double b = (double) sum / (double) month;
//         double P = sn * p;
//         double overpayment = b + P;
//         double overpayment_all = overpayment;
//         credit->overpayment = overpayment;
//         while(sn - b > 0) {
//             sn -= b;
//             P = sn * p;
//             overpayment = b + P;
//             overpayment_all += overpayment;
//         }
//         credit->overpayment_edit = overpayment_all - sum;
//         credit->result_edit = overpayment_all;
//     }
//     return 0.0;
// }
