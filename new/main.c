#include "calculate.h"

int main() {
    char str[256] = "667.546 m 492.21";
    // double x = 1.11;
    // printf("str: %s\n", str);
    char *str_out;
    // str_out = add_space_to_str(str);
    // printf("str: %s\n", str_out);
    // str_out = add_null_to_str(str);
    // printf("str: %s\n", str_out);
    double rez = 0.0l;
    rez = smart_calc(str, 0.0);
    printf("my: %.8lf\n", rez);
    printf("lib %.8lf\n", fmod(667.546, 492.21));
    return 0;
}


// ( sin ( 3 + 5 ) * 7 - cos ( 4 / 9 - 5 ) )
// ( 1 - cos ( 4 / 9 - 5 ) * sin ( log ( 5 ) + 8 ) )


// correct str: 1 4 9 / 5 - n 5 g 8 + i * - 
// correct str: 3 5 + i 7 * 4 9 / 5 - o - 

// void add_null_to_str(char *str) {
//     char *str_output = str;
//     while(str) {
//         if (check_unary_minus(str))
//             *str_output++ = '0';
//         *str_output++ = *str++;
//     }
// }

// int check_unary_minus(char *str) {
//     int status = 0; // yes
//     str--;
//     while(*str == ' ') str--;
//     char check_before = *str;
//     str++;
//     while(*str != '-' || *str == ' ') str++;
//     char check_after = *str;
//     if (check_priority(check_after) != 5 && check_priority(check_before) != 5)
//         status = 1; // no
//     return status;
// }