#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 100



typedef struct {
    int a[N];      // данные
    unsigned int n; // сколько элементов хранится в стеке
    size_t size;
} Stack;


void init(Stack *st) {
    st->n = 0;
}

void push(Stack *st, int data) {
    st->a[st->n] = data;
    st->n++;
}


int check(char k) {
    int check = 0;
    if (k == '+') check = 1;
    if (k == '-') check = 2;
    if (k == '*') check = 3;
    if (k == '/') check = 4;
    if (k == ' ') check = -1;
    if (k == 's') check = 5;
    if (k == 'c') check = 6;
    if (k == 't') check = 7;
    if (k == 'g') check = 8;
    if (k == 'q') check = 9;
    if (k == 'l') check = 10;
    return check;
}

void print(Stack *st) {
    for (unsigned int i = 0; i < st->n; i++)
        printf("%c ", st->a[i]);
    printf("\n");
}

int pop(Stack *st) {  //вытащить последний эл-т из стека
    int res = st->a[st->n - 1];
    st->n--;
    return res;
}

double calc(char *s) {
    double d1, d2, d;
    double otvet = 0.0l;
    Stack num;
    init(&num);
    while(*s != '\0') {
        while(check(*s) == 0 || check(*s) == -1) {
            if(check(*s) == 0) {
                d = *s - '0';
                push(&num, d);
            }
            s++;
        }
            switch(*s) {
                case '+':
                    d1 = pop(&num);
                    d2 = pop(&num);
                    otvet = d1 + d2;
                    printf("%.2lf\n", otvet);
                    push(&num, otvet);
                    break;
                case '-':
                    d2 = pop(&num);
                    d1 = pop(&num);
                    otvet = d1 - d2;
                    printf("%.2lf\n", otvet);
                    push(&num, otvet);
                    break;
                case '*':
                    d1 = pop(&num);
                    d2 = pop(&num);
                    otvet = d1 * d2;
                    printf("%.2lf\n", otvet);
                    push(&num, otvet);
                    break;
                case '/':
                    d2 = pop(&num);
                    d1 = pop(7num);
                    if (d2 != 0) {
                        otvet = d1 / d2;
                    printf("%.2lf\n", otvet);
                    push(&num, otvet);
                    }
                    break;
                case 's':
                    d1 = pop(&num);
                    otvet = sin(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
                case 'c':
                    d1 = pop(&num);
                    otvet = cos(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
                case 't':
                    d1 = pop(&num);
                    otvet = tan(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
               case 'g':
                    d1 = pop(&num);
                    otvet = 1/tan(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
                case 'q':
                    d1 = pop(&num);
                    otvet = sqrt(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
                case 'l':
                    d1 = pop(&num);
                    otvet = log(d1);
                    push(&num, otvet);
                    printf("%.2lf\n", otvet);
                    break;
            }
        s++;
    }
    return otvet;
}

int main() {
    char s[20] = "5 1 + ";
    char *str = s;
    double rez;
    rez = calc(&s[0]);
    printf("%.2lf", rez);
    return 0;
}
