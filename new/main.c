#include "s21_calculate.h"

int main() {
    char str[1024] = "(1+2)*4*cos(x*7-2)+sin(2*x)";
    double rez = 0.0, x=0;
    printf("%.7f\n", smart_calc(str, 0.0));
    printf("%.7f\n",  (1+2)*4*cos(x*7-2)+sin(2*x));

    return 0;
}
