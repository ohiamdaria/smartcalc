#include "s21_smartcalc.h"

int main() {
    Stack stack;
    init_stack(&stack);
    char meow[256] = "(2 + 2) * 2 - 8 * (2 + 3) * (9 * 3)";

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
