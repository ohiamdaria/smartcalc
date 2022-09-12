#include "calculate.h"

// int main() {
//     Stack stack;
//     init_stack(&stack);
//     char meow[256] = "( x + 5 )";

//     char *str = NULL, *str_output = NULL;
//     str = (char *)calloc(256, sizeof(char));
//     str_output = (char *)calloc(256, sizeof(char));
//     strcpy(str, meow);

//     parser(str, str_output, &stack);
//     printf("str: %s\n", str_output);
//     free(str);
//     free(str_output);
//     return 0;
// }


// ( sin ( 3 + 5 ) * 7 - cos ( 4 / 9 - 5 ) )
// ( 1 - cos ( 4 / 9 - 5 ) * sin ( log ( 5 ) + 8 ) )


// correct str: 1 4 9 / 5 - n 5 g 8 + i * - 
// correct str: 3 5 + i 7 * 4 9 / 5 - o - 


int main() {
    char s[514] = "2.2+3";
    printf("%.6lf", smart_calc(&s[0], 0.0));
    return 0;
}
