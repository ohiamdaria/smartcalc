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

signals:
    void firstWindow();

private slots:
    // void on_comboBox_activated(int index);
    // void on_addButton_clicked();    // SLOT-handler pressing add button
    void on_deleteButton_clicked(); // SLOT-handler pressing the delete button
    void on_pushButton_clicked();
    void get_deposits();
    void get_withdrawals();
    void on_addDeposits_button_clicked();
    void on_addWithdrawals_button_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::depositcalc *ui;
    int countWithdrawals = 0, countDeposits = 0;
    QVector<QLineEdit*> SumLineDeposits, SumLineWithdrawals;
    QVector<QDateEdit*> DateLineDeposits, DateLineWithdrawals;
    QVector<QComboBox*> BoxLineDeposits, BoxLineWithdrawals;
};
#endif // DEPOSITCALC_H
