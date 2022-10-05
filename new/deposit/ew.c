#include "ew.h"


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

// typedef struct {
//     double sum;
//     int day_begin, month_begin, year_begin;
//     int frequency_of_pay;
//     int capital;
//     double nalog;
//     double result;
//     int term_in_days;
//     int year4;
// } deposit;

void init_stack(deposit *dep) {
    dep->sum = 0.0;
    dep->day_begin = 0;
    dep->month_begin = 0;
    dep->year_begin = 0;
    dep->frequency_of_pay = 0;
    dep->capital = 0;
    dep->nalog = 0.0;
    dep->result = 0.0;
    dep->term_in_days = 0;
    dep->year4 = 0;
}

void print_stack(deposit *dep) {
    printf("%.6f\n", dep->sum);
    printf("%d\n", dep->day_begin);
    printf("%d\n", dep->month_begin);
    printf("%d\n", dep->year_begin);
    printf("%.6f\n", dep->frequency_of_pay);
    printf("%.6f\n", dep->capital);
    printf("%.6f\n", dep->nalog);
    printf("%.6f\n", dep->result);
    printf("%.6f\n", dep->term_in_days);
    printf("%.6f\n", dep->year4);
}

int main() {
    char *begin_of_term = "02.10.2022";
    double sum = 6004500, tax_rate = 0.0, interest_rate = 6.7, result = 0.0;
    int term = 2, dmy = 6, frequence_of_pay = 1, interest_capital = 0;
    // printf("%d\n", count_days_between_dates(24, begin_of_term));
    result = depositcalc(sum, term, dmy, begin_of_term, interest_rate, tax_rate, frequence_of_pay, interest_capital);
    printf("%.6f\n", result);
    return 0;
}

void calculate_hard(int days_months_years, int L, double interest_rate, double tax_rate, deposit *dep) {
    dep->result = dep->sum;
    int day_for_tax = count_days_between_dates(dep), days = dep->term_in_days;
    if (!dep->capital) {
        print_stack(dep);
        dep->result = dep->sum * pow((1 + interest_rate / (double) (100 * L)), days);

        
        
    } else {
        dep->result = dep->result * pow((1 + interest_rate / (double) (100 * L)), days_months_years);
    }
}

void from_str_to_date(deposit *dep, char *begin_of_term) {
    dep->day_begin = know_days_or_months_or_years(begin_of_term, 1);
    dep->month_begin = know_days_or_months_or_years(begin_of_term += 3, 1);
    dep->year_begin = know_days_or_months_or_years(begin_of_term += 3, 3);
}

int count_days_between_dates(deposit *dep) {
    int result_days = 0, i = 1;
    while (i < dep->day_begin) {
        result_days += count_days_from_months(i, dep->year_begin);
        i++;
    }
    result_days += dep->day_begin;
    if (dep->month_begin < 3 && !fmod(dep->year_begin, 4)) {
        result_days--;
    }
    if (!fmod(dep->year_begin, 4)) result_days = 366 - result_days;
    else
        result_days = 365 - result_days;
    return result_days;
}

double depositcalc(double sum, int term, int dmy, char *begin_of_term, double interest_rate, double tax_rate, int frequency_of_pay, int capital) {
    deposit dep;
    init_stack(&dep);
    dep.sum = sum;
    dep.frequency_of_pay = frequency_of_pay;
    dep.capital = capital;
    from_str_to_date(&dep, begin_of_term);

    int days_months_years = to_days(term, dmy, &dep);
    dep.term_in_days = days_months_years;
    double result_simple = simple_proz(sum, interest_rate, days_months_years);
    double result_hard = sum;

    if (frequency_of_pay == 1) {
        days_months_years = to_days(term, dmy, &dep); // if freq of pay is everyday
        calculate_hard(days_months_years, 365, interest_rate, tax_rate, &dep);
    } else if (frequency_of_pay == 2) {
        days_months_years = count_months(term, dmy, &dep);
        calculate_hard(days_months_years, 12, interest_rate, tax_rate, &dep);
    }
    // } else if (frequency_of_pay == 3) {
    //     days_months_years = count_years(term, dmy, begin_of_term);
    //     result_hard = calculate_hard(capital, days_months_years, 1, interest_rate, sum);
    // } else {
    //     result_hard = result_simple;
    // }
    return dep.result;
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

int to_days(int term, int days, deposit *dep) {
    int result_days = 0;
    if (term == 2) result_days = to_days_from_months(dep->month_begin, dep->year_begin, days);
    if (term == 3) result_days = to_days_from_years(dep->year_begin, days);
    return result_days;
}

int count_days(int term, int days, deposit *dep) {
    return term == 1 ? days : to_days(term, days, dep);
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
    return years * 12;
}

int to_months(int term, int days, deposit *dep) {
    int result_months = 0;
    if (term == 1) result_months = to_months_from_days(dep->month_begin, dep->year_begin, days);
    if (term == 3) result_months = to_months_from_years(dep->year_begin, days);
    return result_months;
}

int count_months(int term, int days, deposit *dep) {
    return term == 2 ? days : to_months(term, days, dep);
}

double simple_proz(double sum, double interest_rate, double days) {
    return ((double)sum * interest_rate * days / (double) 365) / (double)100;
}

double nalog (double interest_rate, double tax_rate, deposit *dep) {
    double neoblagaem_part = 1e+6 * 7.5 / 100;
    return dep->result - neoblagaem_part > 0.0 ? dep->result - neoblagaem_part * 0.13 : 0.0;
}
