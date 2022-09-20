#include "tests.h"

#define ln(x) log(x)


START_TEST(test_1) {
    char str[1024] = "cos( 9.456+ 909  /sin((-1  )*log(2.3  ))) + 5689.98 ^ (-1.9)";
    double result = 0.0l, check_result = cos(9.456+909/sin((-1)*log(2.3)))+pow(5689.98, (-1.9));
    result = smart_calc(&str[0], 0.0);
    ck_assert_double_eq_tol(result, check_result, 1e-7);
}
END_TEST

START_TEST(test_2) {
    char str[1024] = "tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / ln(45.32 / (+99.1334)) ^ (  +2)";
    double result = 0.0l, check_result = pow(tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / ln(45.32 / (+99.1334)), 2);
    result = smart_calc(&str[0], 0.0);
    ck_assert_double_eq_tol(result, check_result, 1e-7);
}
END_TEST

START_TEST(test_3) {
    char str[1024] = "2.4474 /8.0162/ 3.2142+tan( 0.6211 +sin(tan( 7.5952 +5.3702) ) - 4.7121^sin(  1.9427- 2.8496) )"
        "/cos(0.2688 ^0.5391+cos( tan(cos( cos(  5.6221 ))  ) /sin( 2.3295)  -tan( cos(tan( cos(9.2239)  ))"
        ") ) )";
    double result = 0.0l, check_result = 1.660108415837855;
    result = smart_calc(&str[0], 0.0);
    ck_assert_double_eq_tol(result, check_result, 1e-7);
}
END_TEST

START_TEST(test_4) {
    char str[1024] = "asin(0.256) * acos(-0.3456) / atan(0.000023456) + (2345.667 ^ (0.5) - 12.3)";
    double result = 0.0l, check_result = asin(0.256) * acos(-0.3456) / atan(0.000023456) + (pow(2345.667, 0.5) - 12.3);
    result = smart_calc(&str[0], 0.0);
    ck_assert_double_eq_tol(result, check_result, 1e-7);
}
END_TEST

START_TEST(test_x_1) {
    char str[1024] = "tan(6.08123 /log(   5.6321 + 345 * (-x) *(-   13.111))   ) /ln(45.32 / (+99.1334)   )^(  +2)";
    double result = 0.0l, check_result = pow(tan(6.08123 / log(5.6321 + 345 * (-5.2345) * (-13.111))) / ln(45.32 / (+99.1334)), 2),
    x = 5.2345;
    result = smart_calc(&str[0], x);
    ck_assert_double_eq_tol(result, check_result, 1e-7);
}
END_TEST


Suite *suite_smartcalc(void) {
    Suite *s = suite_create("suite_smartcalc");
    TCase *tc = tcase_create("suite_smartcalc");

    tcase_add_test(tc, test_1);
    tcase_add_test(tc, test_2);
    tcase_add_test(tc, test_3);
    tcase_add_test(tc, test_4);
    tcase_add_test(tc, test_x_1);

    suite_add_tcase(s, tc);
    return s;
}
