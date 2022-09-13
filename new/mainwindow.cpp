#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <cstring>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::clicked_text_add(QString toAdd) {
    QString text = ui->Display->text();
    ui->Display->setText(text + toAdd);
}

void MainWindow::on_push_clear_clicked() {
    QString text = ui->Display->text();
     text.chop(1);
     if (text.isEmpty()) { text = ""; }
     ui->Display->setText(text);
}

void MainWindow::on_push_1_clicked() { clicked_text_add("1"); }

void MainWindow::on_push_2_clicked() { clicked_text_add("2"); }

void MainWindow::on_push_3_clicked() { clicked_text_add("3"); }

void MainWindow::on_push_4_clicked() { clicked_text_add("4"); }

void MainWindow::on_push_5_clicked() { clicked_text_add("5"); }

void MainWindow::on_push_6_clicked() { clicked_text_add("6"); }

void MainWindow::on_push_7_clicked() { clicked_text_add("7"); }

void MainWindow::on_push_8_clicked() { clicked_text_add("8"); }

void MainWindow::on_push_9_clicked() { clicked_text_add("9"); }

void MainWindow::on_push_0_clicked() { clicked_text_add("0"); }

void MainWindow::on_push_plus_clicked() { clicked_text_add("+"); }

void MainWindow::on_push_minus_clicked() { clicked_text_add("-"); }

void MainWindow::on_push_mul_clicked() { clicked_text_add("*"); }

void MainWindow::on_push_div_clicked() { clicked_text_add("/"); }

void MainWindow::on_push_sin_clicked() { clicked_text_add("sin"); }

void MainWindow::on_push_cos_clicked() { clicked_text_add("cos"); }

void MainWindow::on_push_tan_clicked() { clicked_text_add("tan"); }

void MainWindow::on_push_asin_clicked() { clicked_text_add("asin"); }

void MainWindow::on_push_acos_clicked() { clicked_text_add("acos"); }

void MainWindow::on_push_atan_clicked() { clicked_text_add("atan"); }

void MainWindow::on_push_sqrt_clicked() { clicked_text_add("sqrt"); }

void MainWindow::on_push_pow_clicked() { clicked_text_add("pow"); }

void MainWindow::on_push_mod_clicked() { clicked_text_add("mod"); }

void MainWindow::on_push_pi_clicked() { clicked_text_add("pi"); }

void MainWindow::on_push_e_clicked() {
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    timer->start(20);
    X = xBegin;
    x.clear();
    y.clear();
}

void MainWindow::on_push_ln_clicked() { clicked_text_add("ln"); }

void MainWindow::on_push_right_clicked() { clicked_text_add("("); }

void MainWindow::on_push_left_clicked() { clicked_text_add(")"); }

void MainWindow::on_push_log_clicked() { clicked_text_add("log"); }


void MainWindow::on_push_eq_clicked() {
    QString input = ui->Display->text();
    char c_input[512] = {0};


    h = 3.14;
    xBegin = -100;
    xEnd = 100 + h;

    ui->widget->xAxis->setRange(-100, 100);
    ui->widget->yAxis->setRange(-100, 100);

     N = (xEnd - xBegin)/h + 2;
      for (X = xBegin; X < N; X += h) {
          strncpy(c_input, qPrintable(input), 255);
          double result = smart_calc(c_input, X);
          x.push_back(X);
          y.push_back(result);
      }

       ui->widget->addGraph();
       ui->widget->graph(0)->addData(x,y);
       ui->widget->replot();

//    double result = smart_calc(c_input, X);
//    QString result_string = QString::number(result);

//    ui->Display->clear();
//    ui->Display->setText(result_string);

}


void MainWindow::on_push_X_clicked() { clicked_text_add("x"); }

void MainWindow::TimerSlot()
{
    QString input = ui->Display->text();
    char c_input[512] = {0};

    if (time <= 20 * N) {
        if (X <= xEnd) {
            strncpy(c_input, qPrintable(input), 255);
            double result = smart_calc(c_input, X);
            x.push_back(X);
            y.push_back(result);
            X += h;
        }
        time += 20;
    } else {
        time = 0;
        timer->stop();
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

}

//void MainWindow::on_push_eq_clicked() {
//    QString input = ui->Display->text();
//    char c_input[512] = {0};
//    strncpy(c_input, qPrintable(input), 255);


//     // QString result_string = QString::number(result);

//     h = 0.1;
//     xBegin = -3;
//     xEnd = 3 + h;

//     ui->widget->xAxis->setRange(-4, 4);
//     ui->widget->yAxis->setRange(0, 9);

//     X = xBegin;
//     N = (xEnd - xBegin)/h + 2;

//     for (X = xBegin; X < N; X += h) {
//         x.push_back(X);
//         y.push_back(smart_calc(c_input, X));
//     }

//     ui->widget->addGraph();
//     ui->widget->graph(0)->addData(x,y);
//     ui->widget->replot();

//    // ui->Display->clear();
//    // ui->Display->setText(result_string);

//    timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
//    ui->widget->clearGraphs();
//    timer->start(20);
//    X = xBegin;
//    x.clear();
//    y.clear();
//}

void MainWindow::on_push_dot_clicked()
{
    clicked_text_add(".");
}



