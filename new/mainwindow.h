#ifndef MAINWINDOW_H
#define MAINWINDOW_H

extern "C" {
#include "s21_calculate.h"
}

#include <QMainWindow>
#include <QVector>
#include <QTimer>
#include "creditcalc/creditcalc.h"
#include "deposit/depositcalc.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_push_1_clicked();

    void on_push_2_clicked();

    void on_push_3_clicked();

    void on_push_4_clicked();

    void on_push_5_clicked();

    void on_push_6_clicked();

    void on_push_7_clicked();

    void on_push_8_clicked();

    void on_push_9_clicked();

    void on_push_0_clicked();

    void on_push_plus_clicked();

    void on_push_minus_clicked();

    void on_push_mul_clicked();

    void on_push_div_clicked();

    void on_push_sin_clicked();

    void on_push_cos_clicked();

    void on_push_tan_clicked();

    void on_push_asin_clicked();

    void on_push_acos_clicked();

    void on_push_atan_clicked();

    void on_push_sqrt_clicked();

    void on_push_pow_clicked();

    void on_push_mod_clicked();

    void on_push_pi_clicked();

    void on_push_e_clicked();

    void on_push_ln_clicked();

    void on_push_right_clicked();

    void on_push_left_clicked();

    void clicked_text_add(QString toAdd);

    void on_push_clear_clicked();

    void on_push_log_clicked();

    void on_push_eq_clicked();

    void on_push_X_clicked();

    void TimerSlot();

    void on_push_dot_clicked();

    void on_graph_clicked(bool checked);

   void Animation();

   void StopAnimation();

   void if_graph_exist();

   void if_graph_not_exist();

   void on_push_run_clicked();

   void on_push_stop_clicked();

//   void on_credit_button_clicked();

//   void on_deposit_button_clicked();

   void on_push_calc_clicked();

   void on_type_an_clicked();

   void on_type_diff_clicked();

private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, yBegin, yEnd, h, X;
    int N, graph = 0, count = 0;

    //credit
    double sum, prozent;
    int month, year, type = 1;

    double result, overpayment;

    QVector<double> x, y;
    QTimer *timer;
    int time;
    bool flag = true;
    creditcalc* sWindow;
    depositcalc* dWindow;

};

#endif // MAINWINDOW_H
