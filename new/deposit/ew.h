#include <stdio.h>
#include <math.h>

typedef struct deposit {
    double sum;
    int day_begin, month_begin, year_begin;
    int frequency_of_pay;
    int capital;
    double nalog;
    double result;
    int term_in_days;
    int year4;
} deposit;



void calculate_hard(int days_months_years, int L, double interest_rate, double tax_rate, deposit *dep);
void from_str_to_date(deposit *dep, char *begin_of_term);
int count_days_between_dates(deposit *dep);
double depositcalc(double sum, int term, int dmy, char *begin_of_term, double interest_rate, double tax_rate, int frequency_of_pay, int capital);
int know_days_or_months_or_years(char *begin_of_term, int i);
int count_days_from_months(int month_number, int year_number);
int to_days_from_months(int month_number, int year_number, int months);
int to_days_from_years(int year_number, int years);
int to_days(int term, int days, deposit *dep);
int count_days(int term, int days, deposit *dep);
int to_months_from_days(int month_number, int year_number, int days);
int to_months_from_years(int year_number, int years);
int to_months(int term, int days, deposit *dep);
int count_months(int term, int days, deposit *dep);
double simple_proz(double sum, double interest_rate, double days);
double nalog (double interest_rate, double tax_rate, deposit *dep);
void init_stack(deposit *dep);


