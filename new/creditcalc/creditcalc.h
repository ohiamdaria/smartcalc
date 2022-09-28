#ifndef CREDITCALC_H
#define CREDITCALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class creditcalc; }
QT_END_NAMESPACE

class creditcalc : public QMainWindow
{
    Q_OBJECT

public:
    creditcalc(QWidget *parent = nullptr);
    ~creditcalc();
    void on_push_calc_clicked();

signals:
    void firstWindow();

private slots:
    void on_type_an_clicked();
    void on_type_diff_clicked();

private:
    Ui::creditcalc *ui;
    double sum, prozent;
    int month, year, type = 1;

    double result, overpayment;
};
#endif // CREDITCALC_H
