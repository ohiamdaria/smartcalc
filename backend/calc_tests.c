#include "tests_src/s21_tests.h"

#define ln(x) log(x)


START_TEST(test_1) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "cos( 9.456+ 909  /sin((-1  )*log(2.3  ))) + 5689.98 ^ (-1.9)";
    double  check_result = cos(9.456+909/sin((-1)*log(2.3)))+pow(5689.98, (-1.9));
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_2) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / ln(45.32 / (+99.1334)) ^ (  +2)";
    double check_result = tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / pow(ln(45.32 / (+99.1334)), 2);
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_3) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "2.4474 /8.0162/ 3.2142+tan( 0.6211 +sin(tan( 7.5952 +5.3702) ) - 4.7121^sin(  1.9427- 2.8496) )"
        "/cos(0.2688 ^0.5391+cos( tan(cos( cos(  5.6221 ))  ) /sin( 2.3295)  -tan( cos(tan( cos(9.2239)  ))"
        ") ) )";
    double check_result = 1.660108415837855;
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_4) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "asin(0.256) * acos(-0.3456) / atan(0.000023456) + (2345.667 ^ (0.5) - 12.3)";
    double result = 0.0l, check_result = asin(0.256) * acos(-0.3456) / atan(0.000023456) + (pow(2345.667, 0.5) - 12.3);
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_1) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "tan(6.08123 /log(   5.6321 + 345 * (-x) *(-   13.111))   ) /ln(45.32 / (+99.1334)   )^(  +2)";
    double check_result = tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / pow(ln(45.32 / (+99.1334)), 2);
    data.x = 5.2345;
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_2) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "555.666 mod 3.456 + ( ( ( atan(0.9876/x) + (-asin(0.222)  )  )  * cos((x * 3) ^ (  0.7889 ) ) - 2222.2 / ( -777.7 ) )";
    data.x = 17.239;
    double check_result = fmod(555.666, 3.456) + ((atan(0.9876/17.239) + (-asin(0.222))) * cos(pow(17.239 * 3, 0.7889)) - 2222.2 / (-777.7));
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_3) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "-1678.2322 * x +  sqrt( log  (38.38 /24.55 ) + ln(58.2 - (-300.4))) * x * x * (-x)";
    data.x = 0.009;
    double check_result = -1678.2322 * 0.009 +  sqrt( log  (38.38 /24.55 ) + ln(58.2 - (-300.4)))* 0.009 * 0.009 * (-0.009);
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_4) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "678.987 * sin ( 23.2 -  6.7 +  sin(x *   x) -9.789 * cos(22.37/2.32)) + tan(342.35 ^ 0.7) + sin ( 23.2 -  6.7 +  sin(x *   x)"
                        "* cos(22.37/2.32) + tan(-3.4235))";
    data.x = 17.239;
    double check_result = 678.987 * sin ( 23.2 -  6.7 +  sin(17.239 *   17.239) -9.789 * cos(22.37/2.32)) + tan(pow(342.35, 0.7)) + sin ( 23.2 -  6.7 +  sin(17.239 *   17.239)
                        * cos(22.37/2.32) + tan(-3.4235));
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_5) {
    data_task_t data;
    init_input(&data);
    char str[1024] = "-(-87.543*sin(0.999+tan(55.5)-2.234))-50.66*(acos(0.234)/atan(0.55)))";
    data.x = 17.239;
    double result = 0.0l, check_result = -(-87.543*sin(0.999+tan(55.5)-2.234))-50.66*(acos(0.234)/atan(0.55));
    smart_calc(&str[0], &data);
    ck_assert_double_eq_tol(data.result, check_result, 1e-7);
}
END_TEST

// START_TEST(test_nan) {
//     int mycode = 1, libcode = 1;
//     char str[1024] = "555.666 mod 3.456 + ( ( ( atan(0.9876/x) + (-asin(2.222)  )  )  * cos(x * 10 ^ (  0.7889 ) ) - 2222.2 / ( -777.7 ) )";
//     double x = 17.239;
//     double result = 0.0l, check_result = fmod(555.666, 3.456) + ((atan(0.9876/x) + (-asin(2.222))) * cos(pow(x * 10, 0.7889)) - 2222.2 / (-777.7));
//     result = smart_calc(&str[0], x);
//     if (result == NAN) mycode = 0;
//     if (check_result == NAN) libcode = 0;
//     ck_assert_int_eq(mycode, libcode);
// }
// END_TEST


Suite *suite_smartcalc(void) {
    Suite *s = suite_create("suite_s21_smartcalc");
    TCase *tc = tcase_create("s21_smartcalc");

    tcase_add_test(tc, test_1);
    tcase_add_test(tc, test_2);
    tcase_add_test(tc, test_3);
    tcase_add_test(tc, test_4);
    tcase_add_test(tc, test_x_1);
    tcase_add_test(tc, test_x_2);
    tcase_add_test(tc, test_x_3);
    tcase_add_test(tc, test_x_4);
    tcase_add_test(tc, test_x_5);
    // tcase_add_test(tc, test_nan);

    suite_add_tcase(s, tc);
    return s;
}

int main(void) {
    srand(time(0));
    run_tests();

    return 0;
}

void run_testcase(Suite *testcase) {
    static int counter_testcase = 1;

    if (counter_testcase > 1)
        putchar('\n');
    printf("%s%d%s", "CURRENT TEST: ", counter_testcase, "\n");
    counter_testcase++;

    SRunner *sr = srunner_create(testcase);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    srunner_free(sr);
}

void run_tests(void) {
    Suite *list_cases[] = {suite_smartcalc(),
                           NULL};

    for (Suite **current_testcase = list_cases; *current_testcase != NULL;
         current_testcase++) {
        run_testcase(*current_testcase);
    }
}
