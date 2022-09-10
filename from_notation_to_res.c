#include "s21_smartcalc.h"
#include <math.h>

#define ln(x) log(x)

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


double calc(char *s) {
    double d =  0.0l;;
    double otvet = 0.0l;
    Stack_number num;
    init_stackn(&num);
    while(*s != '\0') {
        while(check_priority(*s) == 5 || *s == ' ') {
            if (check_priority(*s) == 5) {
                d = *s - '0';
                pushn(&num, d);
            }
            s++;
        }
        switch(*s) {
            case '+':
                pushn(&num, popn(&num) + popn(&num));
                break;
            case '-': ;
                double d1 = popn(&num);
                double d2 = popn(&num);
                otvet = d2 - d1;
                pushn(&num, d2 - d1);
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
            case 'a': // tan
                otvet = tan(popn(&num));
                pushn(&num, otvet);
                break;
            case 's': // asin
                otvet = asin(popn(&num));
                pushn(&num, otvet);
                break;
            case 'c': // acos
                otvet = acos(popn(&num));
                pushn(&num, otvet);
                break;
            case 't': // atan
                otvet = atan(popn(&num));
                pushn(&num, otvet);
                break;
            case 'g': // log
                otvet = log(popn(&num));
                pushn(&num, otvet);
                break;  
            case 'q': // sqrt
                otvet = sqrt(popn(&num));
                pushn(&num, otvet);
                break;
            case 'n': // ln
                otvet = ln(popn(&num));
                pushn(&num, otvet);
                break;  
        }
        s++;
    }
    return otvet;
}

int main() {
    char s[256] = "1 4 9 / 5 - o 5 g 8 + i * -";
    double rez = 0.0l;
    rez = calc(&s[0]);
    printf("%.6lf\n", ( 1 - cos ( (double)4 / (double)9 - 5 ) * sin ( log ( 5 ) + 8 ) ));
    printf("%.6lf\n", rez);
    return 0;
}

