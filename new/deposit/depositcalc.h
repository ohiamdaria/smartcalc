#ifndef DEPOSITCALC_H
#define DEPOSITCALC_H

#include <QMainWindow>
#include <QVector>
#include <QLineEdit>
#include <QDateEdit>
#include <QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class depositcalc; }
QT_END_NAMESPACE

class depositcalc : public QMainWindow
{
    Q_OBJECT

public:
    depositcalc(QWidget *parent = nullptr);
    ~depositcalc();

private slots:
    // void on_comboBox_activated(int index);
    void on_addButton_clicked();    // SLOT-handler pressing add button
    void on_deleteButton_clicked(); // SLOT-handler pressing the delete button
    void on_pushButton_clicked();
    void get_deposits();
    void get_withdrawals();

private:
    Ui::depositcalc *ui;
    int count = 0;
    QVector<QLineEdit*> SumLineDeposits, SumLineWithdrawals;
    QVector<QDateEdit*> DateLineDeposits, DateLineWithdrawals;
    QVector<QComboBox*> BoxLineDeposits, BoxLineWithdrawals;
};
#endif // DEPOSITCALC_H
