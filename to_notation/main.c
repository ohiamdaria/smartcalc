#include "notation.h"

int main() {
    char str[256] = "( sin ( 2 + 3 * x ) )";
    
    char *str_output = from_str_to_notation(&str[0]);
    printf("str_output: %s\n", str_output);
    double rez = 0.0l;
    rez = calc(str_output, 1.55);
    printf("my: %.8lf\n", rez);
    printf("lib %.8lf\n", ( sin ( 2 + 3 * 1.55 ) ));
    return 0;
}


// ( sin ( 3 + 5 ) * 7 - cos ( 4 / 9 - 5 ) )
// ( 1 - cos ( 4 / 9 - 5 ) * sin ( log ( 5 ) + 8 ) )


// correct str: 1 4 9 / 5 - n 5 g 8 + i * - 
// correct str: 3 5 + i 7 * 4 9 / 5 - o - 

