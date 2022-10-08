#ifndef SRC_TESTS_SRC_TEST_H
#define SRC_TESTS_SRC_TEST_H

#include "../backend/s21_calculate.h"
#include <check.h>
#include <stdlib.h>
#include <time.h>

Suite *suite_smartcalc(void);

void run_tests(void);
void run_testcase(Suite *testcase);

double get_rand(double min, double max);
#endif  //  SRC_TESTS_SRC_TEST_H
