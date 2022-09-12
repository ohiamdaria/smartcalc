#include "notation.h"

void notation(char *str, char *str_output, Stack *stack) {
    for(;*str != '\0';str++) {
        int check = check_priority(*str);
        if (*str == 'm' || check == 1)
            str = change_functions_in_str(str);
        switch(check) {
            case 0:
            case 1:
                if (*str == ')')
                     str_output = add_from_stack(str, str_output, stack, 1);   
                else
                    push(stack, *str);
                break;
            case 5:
                str_output = add_numbers(str, str_output);
                while(*str != ' ') str++;
                break;
            case 2:  
            case 3:
            case 4: ;
                str_output = add_from_stack(str, str_output, stack, check);   // не робит для этих случаев :(
                break;
            default:
                continue;
                break;
        }
    }
    while(peek(stack) > 0) *str_output++ = pop(stack);
}

// запятая - че с ней делать,,,,,,
    // if (*str == ',') {
    //     char for_compare = 0;
    //     if (peek(stack) > 0)
    //         for_compare = pop(stack);
    //     while (peek(stack) > 0 && for_compare != '(') {
    //         *str_output++ = for_compare;
    //         *str_output++ = ' ';
    //         for_compare = pop(stack);
    //     }
    // } else {
    // printf(" str look like: %c %s\n", *str, str);
                        // if (peek(stack) == 0 && current_symbol == '(')
        //     error = ARITHM_ERROR;
        // else 
