#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <cstring>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->push_run->setText("START");
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

void MainWindow::on_push_pow_clicked() { clicked_text_add("^"); }

void MainWindow::on_push_mod_clicked() { clicked_text_add("mod"); }

void MainWindow::on_push_pi_clicked() { clicked_text_add("pi"); }

void MainWindow::on_push_e_clicked() { clicked_text_add("e"); }

void MainWindow::on_push_ln_clicked() { clicked_text_add("ln"); }

void MainWindow::on_push_right_clicked() { clicked_text_add("("); }

void MainWindow::on_push_left_clicked() { clicked_text_add(")"); }

void MainWindow::on_push_log_clicked() { clicked_text_add("log"); }

void MainWindow::on_push_X_clicked() { clicked_text_add("x"); }

void MainWindow::on_push_dot_clicked() { clicked_text_add("."); }

void MainWindow::on_push_eq_clicked() {
    ui->widget->clearGraphs();

    QString input = ui->Display->text();
    char c_input[512] = {0};

    strncpy(c_input, qPrintable(input), 255);
    if (!strcmp(c_input, "")) {
        ui->Display->setText("error");
    } else if (graph) {
        if_graph_exist();
    } else if (!graph) {
        if_graph_not_exist();
    }
}


void MainWindow::on_graph_clicked(bool checked) {
    if (checked) graph = 1;
    else
        graph = 0;
}

void MainWindow::TimerSlot() {
    ui->widget->clearGraphs();
    QString input = ui->Display->text();
    char c_input[512] = {0};

    ui->widget->addGraph();
    QPen DotPen;
    DotPen.setWidthF(2);
    ui->widget->graph(0)->setPen(DotPen);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 1));

    if (time <= 20 * N) {
        if (X <= -xBegin) {
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

void MainWindow::Animation() {
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    X = xBegin;
    x.clear();
    y.clear();
}

void MainWindow::StopAnimation() {
    timer->stop();
}

void MainWindow::if_graph_exist() {
    ui->widget->clearGraphs();
    QString input = ui->Display->text();
    char c_input[512] = {0};

    strncpy(c_input, qPrintable(input), 255);

    xBegin = ui->x_Begin->text().toDouble();
    yBegin = ui->y_Begin->text().toDouble();
    h = ui->add_h->text().toDouble();

    ui->widget->addGraph();
    QPen DotPen;
    DotPen.setWidthF(2);
    ui->widget->graph(0)->setPen(DotPen);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 1));

    ui->widget->graph(0)->setName("Sine envelope");

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);
    ui->widget->addGraph();

    N = (-xBegin + h - xBegin)/h + 2;
    for (X = xBegin; X < N; X += h) {
      strncpy(c_input, qPrintable(input), 255);
      double result = smart_calc(c_input, X);
      x.push_back(X);
      y.push_back(result);
    }

    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
}

void MainWindow::if_graph_not_exist() {
    QString input = ui->Display->text();
    char c_input[512] = {0};
    strncpy(c_input, qPrintable(input), 255);

    X = ui->add_x->text().toDouble();
    double result = smart_calc(c_input, X);
    QString result_string = QString::number(result);
    ui->Display->clear();
    ui->Display->setText(result_string);
}

void MainWindow::on_push_run_clicked() {
    flag = !flag;
    if (flag) {
        ui->push_run->setText("START");
        timer->stop();
    } else {
        if (count == 0) {
            Animation();
            count++;
        }
        ui->push_run->setText("STOP");
        timer->start(1);
    }
}

void MainWindow::on_push_stop_clicked() {
    time = 0;
    timer->stop();
    x.clear();
    y.clear();
    flag = true;
    count = 0;
    ui->widget->graph(0)->data()->clear();
    ui->widget->replot();
}


void MainWindow::on_push_calc_clicked()
{
        sum = ui->sum_edit->text().toDouble();
        prozent = ui->proz_edit->text().toDouble();
        year = ui->time_year_edit->text().toDouble();
        month = ui->time_month_edit->text().toDouble();
        month += year * 12;
        double p = (double) prozent / ((double) 100 * (double) 12);
        if (type == 1) {
            overpayment = sum * (p / (1 - (double) 1 / pow(1 + p, month)));
            ui->every_month_label->clear();
            ui->every_month_label->setText(" Ежемесячный платеж");
            ui->every_month_edit->clear();
            ui->every_month_edit->setText(QString::number(overpayment, 'g', 7));
            ui->overpayment_edit->clear();
            ui->overpayment_edit->setText(QString::number(overpayment * month - sum, 'g', 7));
            ui->result_edit->clear();
            ui->result_edit->setText(QString::number(overpayment * month, 'g', 7));
        } else {
            double sn = sum;
            double b = (double) sum / (double) month;
            double P = sn * p;
            overpayment = b + P;
            double overpayment_all = overpayment;
            qDebug()<<QString::number(overpayment, 'g', 7);
            ui->every_month_label->clear();
            ui->every_month_label->setText(" Первый месячный платеж");
            ui->every_month_edit->clear();
            ui->every_month_edit->setText(QString::number(overpayment, 'g', 7));
            while(sn - b > 0) {
                sn -= b;
                P = sn * p;
                overpayment = b + P;
                overpayment_all += overpayment;
            }
            ui->overpayment_edit->clear();
            ui->overpayment_edit->setText(QString::number(overpayment_all - sum, 'g', 7));
            ui->result_edit->clear();
            ui->result_edit->setText(QString::number(overpayment_all, 'g', 7));
        }
    }


void MainWindow::on_type_an_clicked() { type = 1; }

void MainWindow::on_type_diff_clicked() { type = 2;}

void MainWindow::on_deleteButton_clicked() {
    QGridLayout* layout = qobject_cast<QGridLayout*>(sender());
    QLayoutItem* item;
    item = layout->takeAt(0);
    delete item->widget();
    delete item;
    delete layout;
}

void MainWindow::get_deposits() {
    for(size_t i = 0; i < countDeposits; i++) {
        double sum = SumLineDeposits[i]->text().toDouble();
        qDebug()<<QString::number(sum);
        qDebug()<<DateLineDeposits[i]->date().toString("dd.MM.yyyy");
        qDebug()<<BoxLineDeposits[i]->currentText();
    }
}

void MainWindow::get_withdrawals() {
    for(size_t i = 0; i < countWithdrawals; i++) {
        double sum = SumLineWithdrawals[i]->text().toDouble();
        qDebug()<<QString::number(sum);
        qDebug()<<DateLineWithdrawals[i]->date().toString("dd.MM.yyyy");
        qDebug()<<BoxLineWithdrawals[i]->currentText();
    }
}

void MainWindow::on_pushButton_clicked() {
    get_deposits();
    get_withdrawals();
}


void MainWindow::on_addDeposit_button_clicked()
{
    QGridLayout *layout = new QGridLayout;
    QLineEdit* edit = new QLineEdit(this);
    QDateEdit* date = new QDateEdit(this);
    QPushButton* deletebutton = new QPushButton(this);
    QComboBox* box = new QComboBox(this);
    box->addItem("none");
    box->addItem("one-time");
    box->addItem("once a month");
    box->addItem("once a quarter");
    box->addItem("once a year");
    layout->addWidget(box, 0, 0);
    layout->addWidget(date, 0, 1);
    layout->addWidget(edit, 0, 2);
    layout->addWidget(deletebutton, 0, 3);
    countDeposits++;
    ui->widgets_frame->addLayout(layout);
    SumLineDeposits.push_back(edit);
    DateLineDeposits.push_back(date);
    BoxLineDeposits.push_back(box);
    QObject::connect(
             deletebutton, &QPushButton::clicked,
             this, MainWindow::on_deleteButton_clicked);
}


void MainWindow::on_addWithdrawal_button_clicked()
{
    QGridLayout *layout = new QGridLayout;
    QLineEdit* edit = new QLineEdit(this);
    QDateEdit* date = new QDateEdit(this);
    QPushButton* deletebutton = new QPushButton(this);
    QComboBox* box = new QComboBox(this);
    box->addItem("none");
    box->addItem("one-time");
    box->addItem("once a month");
    box->addItem("once a quarter");
    box->addItem("once a year");
    layout->addWidget(box, 0, 0);
    layout->addWidget(date, 0, 1);
    layout->addWidget(edit, 0, 2);
    layout->addWidget(deletebutton, 0, 3);
    countWithdrawals++;
    ui->widgets_frame2->addLayout(layout);
    SumLineWithdrawals.push_back(edit);
    DateLineWithdrawals.push_back(date);
    BoxLineWithdrawals.push_back(box);
    QObject::connect(
                deletebutton, &QPushButton::clicked,
                this, MainWindow::on_deleteButton_clicked);
}

