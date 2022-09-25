#include "depositcalc.h"
#include "ui_depositcalc.h"

#include <QCheckBox>

depositcalc::depositcalc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::depositcalc)
{
    ui->setupUi(this);
    connect(ui->addDeposits_button, &QPushButton::clicked,
                    this, depositcalc::on_addButton_clicked);
    connect(ui->addWidget_button, &QPushButton::clicked,
                    this, depositcalc::on_addButton_clicked);
}

depositcalc::~depositcalc() { delete ui; }

void depositcalc::on_deleteButton_clicked() {
    QPushButton* deletebutton = qobject_cast<QPushButton*>(sender());
    QLineEdit* edit = qobject_cast<QLineEdit*>(sender());
    QDateEdit* date = qobject_cast<QDateEdit*>(sender());

    delete edit;
    delete date;
    delete deletebutton;
}

void depositcalc::get_deposits() {
    for(size_t i = 0; i < count; i++) {
        double sum = SumLineDeposits[i]->text().toDouble();
        qDebug()<<QString::number(sum);
        qDebug()<<DateLineDeposits[i]->date().toString("dd.MM.yyyy");
        qDebug()<<BoxLineDeposits[i]->currentText();
    }
}

void depositcalc::get_withdrawals() {
    for(size_t i = 0; i < count; i++) {
        double sum = SumLineWithdrawals[i]->text().toDouble();
        qDebug()<<QString::number(sum);
        qDebug()<<DateLineWithdrawals[i]->date().toString("dd.MM.yyyy");
        qDebug()<<BoxLineWithdrawals[i]->currentText();
    }
}

void depositcalc::on_pushButton_clicked() {
    get_deposits();
    get_withdrawals();
}

void depositcalc::addButtons() {
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
}


void depositcalc::on_addWithdrawals_button_clicked() {
    countWithdrawals++;
    ui->widgets_frame->addLayout(layout);
    SumLineWithdrawals.push_back(edit);
    DateLineWithdrawals.push_back(date);
    BoxLineWithdrawals.push_back(box);
    QObject::connect(
                deletebutton, &QPushButton::clicked,
                this, depositcalc::on_deleteButton_clicked);
}


void depositcalc::on_addDeposits_button_clicked()
{
     ui->widgets_frame->addLayout(layout);
     SumLineDeposits.push_back(edit);
     DateLineDeposits.push_back(date);
     BoxLineDeposits.push_back(box);
     QObject::connect(
                 deletebutton, &QPushButton::clicked,
                 this, depositcalc::on_deleteButton_clicked);
}

