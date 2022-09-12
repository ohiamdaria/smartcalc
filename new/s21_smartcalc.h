#ifndef S21_SMARTCALC_H_
#define S21_SMARTCALC_H_

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char a[256];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack;

typedef struct {
    double a[256];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack_number;

#define OK 0
#define ARITHM_ERROR 1

#endif // S21_SMARTCALC
