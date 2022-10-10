#include "s21_credit_deposit.h"

void init_deposit(deposit_t *deposit) {
  deposit->sum = 0.0;
  deposit->type_of_term = 0;
  deposit->term = 0;
  deposit->interest_rate = 0.0;
  deposit->tax_rate = 0.0;
  deposit->frequency_of_payments = 0;
  deposit->capital = 0;
  deposit->result = 0.0;
}

void init_deposit_dates(dates_t *date) {
  date->day_begin = 0;
  date->month_begin = 0;
  date->year_begin = 0;
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

void convert_dates_to_struct(dates_t *data, char *begin_of_term) {
    data->day_begin = know_days_or_months_or_years(begin_of_term, 1);
    data->month_begin = know_days_or_months_or_years(begin_of_term += 3, 1);
    data->year_begin = know_days_or_months_or_years(begin_of_term += 3, 3);
}

int count_period(deposit_t *deposit, dates_t *data) {
  data->month_begin++;
  int add_days = 0;
  if (deposit->type_of_term == 1) {
    if (data->month_begin == 1) add_days = 31;
    else if (data->month_begin == 2 && fmod(data->year_begin, 4) > 0.0) add_days = 28;
    else if (data->month_begin == 2 && !fmod(data->year_begin, 4)) add_days = 29;
    else if (data->month_begin == 3) add_days = 31;
    else if (data->month_begin == 4) add_days = 30;
    else if (data->month_begin == 5) add_days = 31;
    else if (data->month_begin == 6) add_days = 30;
    else if (data->month_begin == 7) add_days = 31;
    else if (data->month_begin == 8) add_days = 31;
    else if (data->month_begin == 9) add_days = 30;
    else if (data->month_begin == 10) add_days = 31;
    else if (data->month_begin == 11) add_days = 30;
    else if (data->month_begin == 12) add_days = 31;
   } else if (deposit->type_of_term == 2) {
    add_days = 1;
   }
   return add_days;
}

// int count_days_between_dates(deposit_t *deposit, dates_t *data) {
//     int result_days = 0, i = 1;
//     while (i < data->day_begin) {
//         result_days += count_period(deposit, data);
//         i++;
//     }
//     result_days += data->day_begin;
//     if (data->month_begin < 3 && !fmod(data->year_begin, 4)) {
//         result_days--;
//     }
//     if (!fmod(data->year_begin, 4)) result_days = 366 - result_days;
//     else
//         result_days = 365 - result_days;
//     return result_days;
// }

int depositcalc(deposit_t *deposit, dates_t *data) {
  int L = 1200;
  if (deposit->frequency_of_payments == 1) L = 36500;
  deposit->tax_rate = deposit->tax_rate * deposit->term / L;
  deposit->interest_rate = deposit->interest_rate * deposit->term / L;
  int status = 0, add_days = count_period(deposit, data);

  double added = 0;

  for (int i = add_days; i <= deposit->term; i += add_days) {
    double tmp = deposit->sum * deposit->interest_rate;
    deposit->result_tax += tmp * (deposit->tax_rate);

    if (deposit->capital)
      deposit->sum += tmp * (1 - deposit->tax_rate);
    else
      added += tmp * (1 - deposit->tax_rate);

    if (deposit->sum < 0) {
        status = 1;
        break;
    }
  }

  deposit->result = deposit->sum;
  if (!deposit->capital) deposit->result += added;
  if (deposit->type_of_term == 1) add_days = count_period(deposit, data);

  return status;
}

void init_credit(credit_t *credit) {
    credit->sum = 0.0;
    credit->prozent = 0.0;
    credit->year = 0;
    credit->month = 0;
    credit->overpayment = 0.0;
    credit->overpayment_edit = 0.0;
    credit->result_edit = 0.0;
}

int creditcalc(credit_t *credit, double sum, double prozent, int year, int month, int type) {
    int status = OK;
    credit->sum = sum;
    credit->prozent = prozent;
    credit->year = year;
    credit->month = month;
    month += year * 12;
    double p = (double) prozent / ((double) 100 * (double) 12);
    if (type == 1) {
        double overpayment = sum * (p / (1 - (double) 1 / pow(1 + p, month)));
        credit->overpayment = overpayment;
        credit->overpayment_edit = overpayment * month - sum;
        credit->result_edit = overpayment * month;
    } else {
        double sn = sum;
        double b = (double) sum / (double) month;
        double P = sn * p;
        double overpayment = b + P;
        double overpayment_all = overpayment;
        credit->overpayment = overpayment;
        while(sn - b > 0) {
            sn -= b;
            P = sn * p;
            overpayment = b + P;
            overpayment_all += overpayment;
        }
        credit->overpayment_edit = overpayment_all - sum;
        credit->result_edit = overpayment_all;
    }
    return status;
}
