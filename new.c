#include "s21_smartcalc.h"

int main() {
    Stack stack;
    init_stack(&stack);
    char meow[256] = "(2.235 ^ 12.5 ) * 0.0 - 8 * ( 12452 + 3 ) * ( 9333.0 ^ 3 )";

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
