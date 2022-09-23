#include "s21_calculate.h"

int main() {
    char str[1024] = "-2 * 5.5678 * (1-sin(4.5789))";
    double rez = 0.0;
    printf("%.7f\n", smart_calc(str, 0.0));
    printf("%.7f\n", -2 * 5.5678 * (1-sin(4.5789)));

    return 0;
}
