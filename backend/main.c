#include "s21_calculate.h"

int main() {
  data_task_t data;
   init_input(&data)
char str[1024] = "555.666 mod 3.456";
    double check_result = fmod(555.666, 3.456);
    smart_calc(&str[0], &data);
    printf("%.6f\n%.6f\n", data.result, check_result);
  return 0;
}