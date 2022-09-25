#include "s21_calculate.h"

int main() {
    char str[1024] = "";
    double rez = 0.0;
    printf("%.7f\n", smart_calc(str, 0.0));
    printf("%.7f\n",  - 2 * fmod(5.5678,4.5789));

    return 0;
}
