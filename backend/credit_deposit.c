#include "s21_calculate.c"

typedef struct {
  double sum;
  int type_of_term;
  int term;
  double interest_rate;
  double tax_rate;
  int frequency_of_payments;
  int capital;
  double result;
} deposit_t;

typedef struct {
  int day_begin;
  int month_begin;
  int year_begin;
} dates_t;

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

void convert_dates_to_struct(dates *data, char *begin_of_term) {
    data->day_begin = know_days_or_months_or_years(begin_of_term, 1);
    data->month_begin = know_days_or_months_or_years(begin_of_term += 3, 1);
    data->year_begin = know_days_or_months_or_years(begin_of_term += 3, 3);
}


int count_period(deposit_t *deposit, dates *data) {
  if (deposit->type_of_term == 1) {
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

int depositcalc(deposit_t *deposit, dates *data) {
  deposit->tax_percent = tax_percent * pay_period / 1200;
  deposit->interest_rate = interest_rate * pay_period / 1200;
  int status = 0, add_days = count_period(deposit);

  double added = 0;

  for (int i = add_days; i <= deposit->term; i += add_days) {
    double tmp = deposit->sum * deposit->interest_rate;
    deposit->result_tax += tmp * (deposit->tax_percent);

    if (capitalize)
      deposit->sum += tmp * (1 - deposit->tax_percent);
    else
      added += tmp * (1 - deposit->tax_percent);

    if (deposit->sum < 0) {
        status = 1;
        break;
    }
  }

  deposit->result_sum = deposit->sum;
  if (!deposit->capital) deposit->result_sum += added;
  if (deposit->type_of_term == 1) add_days = count_period(deposit);

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

double creditcalc(credit_t *credit, double sum, double prozent, int year, int month, int type) {
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
    return 0.0;
}
