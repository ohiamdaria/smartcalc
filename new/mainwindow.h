#ifndef MAINWINDOW_H
#define MAINWINDOW_H

extern "C" {
#include "s21_smartcalc.h"
#include "calculate.h"
}

#include <QMainWindow>

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

    void on_push_space_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
