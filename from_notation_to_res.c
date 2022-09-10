#include "s21_smartcalc.h"

double calc(char *s) {
    double d =  0.0l;;
    double otvet = 0.0l;
    Stack num;
    init_stack(&num);
    while(*s != '\0') {
        printf("char2: %c\n", *s);
        while(check_priority(*s) == 5 || *s == ' ') {
            printf("char: %c\n", *s);
            if (check_priority(*s) == 5) {
                d = *s - '0';
                push(&num, d);
            }
            s++;
        }
        printf("char3: %c\n", *s);
        switch(*s) {
            case '+':
                printf("here\n");
                otvet = pop(&num) + pop(&num);
                push(&num, otvet);
                break;
            case '-':
                otvet = pop(&num) - pop(&num);
                push(&num, otvet);
                break;
            case '*':
                otvet = pop(&num) * pop(&num);
                push(&num, otvet);
                break;
            case '/':
                otvet = pop(&num) / pop(&num);
                push(&num, otvet);
                break;
            //     case 's':
            //         otvet = sin(pop(num));
            //         push(num, otvet);
            //         break;
            //     case 'c':
            //         d1 = pop(num);
            //         otvet = cos(d1);
            //         push(num, otvet);
            //         printf("%.2lf\n", otvet);
            //         break;
            //     case 't':
            //         d1 = pop(num);
            //         otvet = tan(d1);
            //         push(num, otvet);
            //         printf("%.2lf\n", otvet);
            //         break;
            //    case 'g':
            //         d1 = pop(num);
            //         otvet = 1/tan(d1);
            //         push(num, otvet);
            //         printf("%.2lf\n", otvet);
            //         break;
            //     case 'q':
            //         d1 = pop(num);
            //         otvet = sqrt(d1);
            //         push(num, otvet);
            //         printf("%.2lf\n", otvet);
            //         break;
            //     case 'l':
            //         d1 = pop(num);
            //         otvet = log(d1);
            //         push(num, otvet);
            //         printf("%.2lf\n", otvet);
            //         break;  
        }
        s++;
        printf("char4: %c\n", *s);
    }
    return pop(&num);
}

int main() {
    char s[20] = "3 5 + 7 *";
    double rez = 0.0l;
    rez = calc(&s[0]);
    printf("%.2lf", rez);
    return 0;
}
