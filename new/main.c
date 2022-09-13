#include "calculate.h"

int main() {
    char str[256] = "( sin ( 2 + 3 * x ) )";
    double x = 1.11;

    double rez = 0.0l;
    rez = smart_calc(str, x);
    printf("my: %.8lf\n", rez);
    printf("lib %.8lf\n", ( sin ( 2 + 3 * x ) ));
    return 0;
}


// ( sin ( 3 + 5 ) * 7 - cos ( 4 / 9 - 5 ) )
// ( 1 - cos ( 4 / 9 - 5 ) * sin ( log ( 5 ) + 8 ) )


// correct str: 1 4 9 / 5 - n 5 g 8 + i * - 
// correct str: 3 5 + i 7 * 4 9 / 5 - o - 

