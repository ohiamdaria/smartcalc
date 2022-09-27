#include <stdio.h>
#include <math.h>


// сумма вклада
// срок
// начало срока
// проц ставка
// налоговая ставка
// периодичность выплат
// капитализация процентов
// пополнения
// снятия


int to_days_from_months(int term, int days, char *begin_of_term) {
    int day_number = 0, month_number = 0, year_number = 0, i = 1;
    while (*begin_of_term != '.') {
        day_number = (*begin_of_term - '0') * pow(10, i) + day_number;
        begin_of_term++;
        i--;
    }
    begin_of_term++;
    i = 1;
    while (*begin_of_term != '.') {
        month_number = (*begin_of_term - '0') * pow(10, i) + month_number;
        begin_of_term++;
        i--;
    }
    begin_of_term++;
    i = 3;
    while (*begin_of_term != '\0') {
        year_number = (*begin_of_term - '0') * pow(10, i) + year_number;
        begin_of_term++;
        i--;
    }
    int result_days = 0;
    if (term == 2) {
        while(days > 0) {
            int add_days = 0;
            month_number++;
            if (month_number > 12) {
                month_number = 1;
                year_number++;
            }
            if (month_number == 1) add_days = 31;
            else if (month_number == 2 && fmod(year_number, 4) > 0.0) add_days = 28;
            else if (month_number == 2 && !fmod(year_number, 4)) add_days = 29;
            else if (month_number == 3) add_days = 31;
            else if (month_number == 4) add_days = 30;
            else if (month_number == 5) add_days = 31;
            else if (month_number == 6) add_days = 30;
            else if (month_number == 7) add_days = 31;
            else if (month_number == 8) add_days = 31;
            else if (month_number == 9) add_days = 30;
            else if (month_number == 10) add_days = 31;
            else if (month_number == 11) add_days = 30;
            else if (month_number == 12) add_days = 31;
            result_days += add_days;
            days--;
        }
    }
    return result_days;
}

int count_term(int term, int days, char *begin_of_term) {
    if (term == 1) return days;
    else
        return to_days_from_months(term, days, begin_of_term);
}

double depositcalc(double sum, int term, int days, char *begin_of_term, double tax_rate, double interest_rate, int frequency_of_payments) {
    days = count_term(term, days, "28.09.2022");
    printf("days: %d\n", days);
    double result = ((double)sum * interest_rate * days / (double) 365) / (double)100;
    long double result2 = 0.0;
    days = 12;
    int month_number = 9, year_number = 2022;
    while(days > 0) {
            int add_days = 0;           
            if (month_number > 12) {
                month_number = 1;
                year_number++;
            }
            if (month_number == 1) add_days = 31;
            else if (month_number == 2 && fmod(year_number, 4) > 0.0) add_days = 28;
            else if (month_number == 2 && !fmod(year_number, 4)) add_days = 29;
            else if (month_number == 3) add_days = 31;
            else if (month_number == 4) add_days = 30;
            else if (month_number == 5) add_days = 31;
            else if (month_number == 6) add_days = 30;
            else if (month_number == 7) add_days = 31;
            else if (month_number == 8) add_days = 31;
            else if (month_number == 9) add_days = 30;
            else if (month_number == 10) add_days = 31;
            else if (month_number == 11) add_days = 30;
            else if (month_number == 12) add_days = 31;
            long double result4 = ((long double)sum * interest_rate * add_days / (long double) 365) / (long double)100;
            result2 += result4;
            month_number++;
            printf("res: %.6Lf\n", result4);
            days--;
    }
    printf("%.6f", result);
    printf("%.10Lf", result2);
    return 0; 
}

int main() {
    double sum = 60000, tax_rate = 0.0, interest_rate = 6.7;
    int term = 2, days = 12, frequence_of_payments = 0;
    depositcalc(sum, term, days, "10.05.2000", tax_rate, interest_rate, frequence_of_payments);
}