#include "calculate.h"

double calc(char *s, double number) {
    double d =  0.0l;;
    double otvet = 0.0l;
    Stack_number num;
    init_stackn(&num);
    while(*s != '\0') {
        while(check_priority(*s) == 5 || *s == ' ') {
            if (check_priority(*s) == 5 && *s != 'x') {
                d = *s - '0';
                pushn(&num, d);
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
            case '/': ;
                double d3 = popn(&num);
                double d4 = popn(&num);
                otvet = d4 / d3;
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
            case 'q':
                otvet = sqrt(popn(&num));
                pushn(&num, otvet);
                break;
            case 'n': // отриц числа 
                otvet = ln(popn(&num));
                pushn(&num, otvet);
                break;  
        }
        printf("otvet: %.6lf\n", otvet);
        s++;
    }
    printf("otvet: %.6lf\n", otvet);
    return otvet;
}