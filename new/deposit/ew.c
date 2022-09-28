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

// term 1 - days, 2 - months, 3 - years
// tax rate = 7.5 const
// interest rate == proz
// frequency of payments - 1 - every day 2 - every month 3 - every year
// interest capitalization = 1 - yes 0 - no

double depositcalc(double sum, int term, int dmy, char *begin_of_term, double interest_rate, int frequency_of_pay, int capital);
double simple_proz(double sum, double interest_rate, double days);
int know_days_or_months_or_years(char *begin_of_term, int i);
int to_days_from_months(int term, int days, int months);
int to_days_from_years(int year_number, int years);
int to_days(int term, int days, char *begin_of_term);
int count_days(int term, int days, char *begin_of_term);
int to_months_from_days(int month_number, int year_number, int days);
int to_months_from_days(int month_number, int year_number, int days);
int to_months_from_years(int year_number, int years);
int to_months(int term, int days, char *begin_of_term);
int count_months(int term, int days, char *begin_of_term);

int main() {
    char *begin_of_term = "28.09.2022";
    double sum = 350000, tax_rate = 0.0, interest_rate = 4.7;
    int term = 2, dmy = 9, frequence_of_pay = 2, interest_capital = 1;
    // printf("%d\n", to_months_from_days(28, 2000, 890));
    // to_days(term, dmy, begin_of_term);
    depositcalc(sum, term, dmy, begin_of_term, interest_rate, frequence_of_pay, interest_capital);
    
}

double depositcalc(double sum, int term, int dmy, char *begin_of_term, double interest_rate, int frequency_of_pay, int capital) {
    int days_months_years = dmy;
    double result_simple = simple_proz(sum, interest_rate, days_months_years);
    double result_hard = sum;
    if (frequency_of_pay == 1) {
        days_months_years = to_days(term, dmy, begin_of_term); // if freq of pay is everyday
        if (!capital)
            result_hard = sum * pow((1 + interest_rate / (double) (100 * 365)), days_months_years);
        else
            while(days_months_years >= 0) {
                double day_result = result_hard * pow((1 + interest_rate / (double) (100 * 365)), 1) - result_hard;
                result_hard += day_result;
                days_months_years--;
            }
    }
    if (frequency_of_pay == 2) {
        days_months_years = count_months(term, dmy, begin_of_term) - 1;
        if (!capital)
            result_hard = sum * pow((1 + interest_rate / (double) (100 * 12)), days_months_years);
        else {
            while(days_months_years >= 0) {
                result_hard = result_hard * (1 + interest_rate / (double) (100.000 * 12.000));
                days_months_years--;
            }
        }
    }
    printf("%d\n", days_months_years);
    printf("%.6f\n", result_hard);
    return 0.0;
}

int know_days_or_months_or_years(char *begin_of_term, int i) { 
    int number = 0;
    while (i >= 0) {
        number = (*begin_of_term - '0') * pow(10, i) + number;
        begin_of_term++;
        i--;
    }
    return number;
}

int count_days_from_months(int month_number, int year_number) {
    int add_days = 0;
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
    return add_days;
}

int to_days_from_months(int month_number, int year_number, int months) {
    int result_days = 0;
    while(months > 0) {
            month_number++;
            if (month_number > 12) {
                month_number = 1;
                year_number++;
            }
            result_days += count_days_from_months(month_number, year_number);
            months--;
        }
    return result_days;
}

int to_days_from_years(int year_number, int years) {
    int result_days = 0;
    while (years > 0) {
        int add_days = 0;
        year_number++;
        if (fmod(year_number, 4) > 0.0) add_days = 365;
        else
            add_days = 366;
        result_days += add_days;
        years--; 
    }
    return result_days;
}

int to_days(int term, int days, char *begin_of_term) {
    int month_number = know_days_or_months_or_years(begin_of_term += 3, 1);
    int year_number = know_days_or_months_or_years(begin_of_term += 3, 3);
    int result_days = 0;
    if (term == 2) result_days = to_days_from_months(month_number, year_number, days);
    if (term == 3) result_days = to_days_from_years(year_number, days);
    return result_days;
}

int count_days(int term, int days, char *begin_of_term) {
    return term == 1 ? days : to_days(term, days, begin_of_term);
}

int to_months_from_days(int month_number, int year_number, int days) {
    int result_months = 0;
    while(days > 0) {
            month_number++;
            if (month_number > 12) {
                month_number = 1;
                year_number++;
            }
            days -= count_days_from_months(month_number, year_number);
            result_months++;
    }
    return result_months;
}

int to_months_from_years(int year_number, int years) {
    int result_months = 0;
    while (years > 0) {
        result_months += 12;
        years--; 
    }
    return result_months;
}

int to_months(int term, int days, char *begin_of_term) {
    int month_number = know_days_or_months_or_years(begin_of_term += 3, 1);
    int year_number = know_days_or_months_or_years(begin_of_term += 3, 3);
    int result_months = 0;
    if (term == 1) result_months = to_months_from_days(month_number, year_number, days);
    if (term == 3) result_months = to_months_from_years(year_number, days);
    return result_months;
}

int count_months(int term, int days, char *begin_of_term) {
    return term == 2 ? days : to_months(term, days, begin_of_term);
}

double simple_proz(double sum, double interest_rate, double days) {
    return ((double)sum * interest_rate * days / (double) 365) / (double)100;
}