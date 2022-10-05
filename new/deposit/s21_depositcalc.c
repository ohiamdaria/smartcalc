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

int know_days_or_months_or_years(char *begin_of_term, int i) { 
    int number = 0;
    while (*begin_of_term != '.') {
        number = (*begin_of_term - '0') * pow(10, i) + number;
        begin_of_term++;
        i--;
    }
    begin_of_term++;
    return number;
}

int to_days_from_months(int term, int days, char *begin_of_term) {
    int day_number = know_days_or_months_or_years(begin_of_term, 1);
    int month_number = know_days_or_months_or_years(begin_of_term, 1);
    int year_number = know_days_or_months_or_years(begin_of_term, 3);

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
    if (term == 3) {
        while (days > 0) {
            int add_days = 0;
            year_number++;
            if (fmod(year_number, 4) > 0.0) add_days = 365;
            else
                add_days = 366;
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

// double nalog(double interest_rate, double result) {
//     double neoblagaem_part = pow(10, 6) * 7.5 / 100;
//     double sum = result - neoblagaem_part;
//     return sum > 0.0 ? sum * 0.13 : 0.0;
// }

double depositcalc(double sum, int term, int days_ot_months_or_years, char *begin_of_term, double tax_rate, double interest_rate, int frequency_of_payments, int capital) {
    double days = count_term(term, days_ot_months_or_years, "10.10.2022");
    printf("days: %d\n", days_ot_months_or_years);
    double result = 0.0;
    result = round(((double)sum * interest_rate * 1 / (double) 365) / (double)100 * 100) / 100.0; // diff dates because days in current year is always 365
    result *= days;

    double result2 = sum;
    days = 12;
    int month_number = 10, year_number = 2022;
    double sum_clear = sum;
    double nalog_all = 0.0;
    if (frequency_of_payments == 2) {
        while(days_ot_months_or_years > 0) {
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

                if (frequency_of_payments == 1 || frequency_of_payments == 2) {
                    if (month_number == 1) add_days = 32;
                    else if (month_number == 12) add_days = 30;
                }
                double result4 = round((((double)result2 * interest_rate * add_days / (double) 365) / (double)100 * 100)) / 100.0;
                printf("%f\n", result4);
                // if (month_number == 1) {
                //     double nalog1 = nalog(result2, interest_rate, result2);
                //     printf("!!!!nalog: %.6f\n", nalog1);
                //     result2 = 0;
                // }
                result2 += result4;
                sum_clear += result4;
                month_number++;
                days_ot_months_or_years--;
        }
    }
    printf("%.6f\n", result);
    printf("%.10f\n", result2);
    return 0; 
}

int main() {
    double sum = 567879, tax_rate = 0.0, interest_rate = 8.4567;
    int term = 1, days = 12, frequence_of_payments = 2;
    depositcalc(sum, term, days, "10.05.2000", tax_rate, interest_rate, frequence_of_payments, 1);
}