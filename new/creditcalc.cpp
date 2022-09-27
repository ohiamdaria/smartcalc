#include "creditcalc.h"
#include "ui_creditcalc.h"
#include <QMainWindow>
#include <cstring>
#include <QString>

creditcalc::creditcalc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::creditcalc)
{
    ui->setupUi(this);
}

creditcalc::~creditcalc()
{
    delete ui;
}


void creditcalc::on_push_calc_clicked() {
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

            qDebug()<<QString::number(overpayment, 'g', 7);
        }
        ui->overpayment_edit->clear();
        ui->overpayment_edit->setText(QString::number(overpayment_all - sum, 'g', 7));
        ui->result_edit->clear();
        ui->result_edit->setText(QString::number(overpayment_all, 'g', 7));
    }
}


void creditcalc::on_type_an_clicked() { type = 1; }

void creditcalc::on_type_diff_clicked() { type = 2; }

