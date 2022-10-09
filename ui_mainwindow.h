/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Calculator;
    QLabel *label_3;
    QPushButton *push_minus;
    QRadioButton *graph;
    QPushButton *push_div;
    QPushButton *push_e;
    QPushButton *push_mod;
    QPushButton *push_pow;
    QLineEdit *x_Begin;
    QLabel *label;
    QPushButton *push_clear;
    QPushButton *push_right;
    QPushButton *push_4;
    QPushButton *push_clear_2;
    QPushButton *push_acos;
    QPushButton *push_sqrt;
    QPushButton *push_5;
    QLineEdit *add_x;
    QPushButton *push_asin;
    QPushButton *push_log;
    QPushButton *push_sin;
    QPushButton *push_unary;
    QPushButton *push_mul;
    QPushButton *push_cos;
    QLineEdit *add_h;
    QLineEdit *y_Begin;
    QLabel *label_4;
    QPushButton *push_left;
    QLabel *label_2;
    QPushButton *push_3;
    QPushButton *push_pi;
    QPushButton *push_0;
    QPushButton *push_tan;
    QPushButton *push_atan;
    QPushButton *push_plus;
    QPushButton *push_1;
    QPushButton *push_X;
    QPushButton *push_2;
    QPushButton *push_9;
    QLineEdit *Display;
    QPushButton *push_ln;
    QPushButton *push_eq;
    QPushButton *push_dot;
    QPushButton *push_7;
    QPushButton *push_6;
    QPushButton *push_8;
    QCustomPlot *widget;
    QPushButton *push_stop;
    QPushButton *push_run;
    QWidget *CreditCalc;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *type_label;
    QLabel *time_label;
    QVBoxLayout *verticalLayout;
    QRadioButton *type_an;
    QRadioButton *type_diff;
    QLabel *proz_label;
    QLabel *sum_label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *time_year_edit;
    QLabel *time_year_line;
    QLineEdit *time_month_edit;
    QLabel *time_month_line;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sum_edit;
    QLabel *rub_line;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *proz_edit;
    QLabel *proz_line;
    QPushButton *push_calc;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *every_month_edit;
    QLineEdit *result_edit;
    QLabel *every_month_label;
    QLineEdit *overpayment_edit;
    QLabel *result_label;
    QLabel *overpayment_label;
    QWidget *DepositCalc;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *time_label_2;
    QLineEdit *sum_deposit;
    QLineEdit *tax_rate;
    QLabel *period_label;
    QLabel *proz_label_2;
    QLabel *sum_label_2;
    QLabel *nalog_label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *interest_rate;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *term_deposit;
    QComboBox *comboBox;
    QLabel *begin_data_label;
    QVBoxLayout *verticalLayout_2;
    QComboBox *frequency_of_pay;
    QRadioButton *capital;
    QDateEdit *data_begin_term;
    QPushButton *push_deposit;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *oversum;
    QLineEdit *tax_sum;
    QLineEdit *deposit_sum;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(669, 708);
        MainWindow->setMinimumSize(QSize(669, 708));
        MainWindow->setMaximumSize(QSize(669, 708));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	color: #000000;\n"
"	background-color: #DCDCDC;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 650, 710));
        tabWidget->setMinimumSize(QSize(650, 710));
        tabWidget->setMaximumSize(QSize(650, 710));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"	color: #E6E6FA;\n"
"	text: #999999;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: black;\n"
"}"));
        Calculator = new QWidget();
        Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_3 = new QLabel(Calculator);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 230, 51, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_minus = new QPushButton(Calculator);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(push_minus);
        push_minus->setObjectName(QString::fromUtf8("push_minus"));
        push_minus->setGeometry(QRect(510, 150, 51, 41));
        push_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        graph = new QRadioButton(Calculator);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(70, 110, 141, 41));
        graph->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_div = new QPushButton(Calculator);
        buttonGroup->addButton(push_div);
        push_div->setObjectName(QString::fromUtf8("push_div"));
        push_div->setGeometry(QRect(510, 70, 51, 41));
        push_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_e = new QPushButton(Calculator);
        buttonGroup->addButton(push_e);
        push_e->setObjectName(QString::fromUtf8("push_e"));
        push_e->setGeometry(QRect(210, 230, 51, 41));
        push_e->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_mod = new QPushButton(Calculator);
        buttonGroup->addButton(push_mod);
        push_mod->setObjectName(QString::fromUtf8("push_mod"));
        push_mod->setGeometry(QRect(310, 230, 51, 41));
        push_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_pow = new QPushButton(Calculator);
        buttonGroup->addButton(push_pow);
        push_pow->setObjectName(QString::fromUtf8("push_pow"));
        push_pow->setGeometry(QRect(210, 70, 51, 41));
        push_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        x_Begin = new QLineEdit(Calculator);
        x_Begin->setObjectName(QString::fromUtf8("x_Begin"));
        x_Begin->setGeometry(QRect(120, 150, 91, 41));
        x_Begin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label = new QLabel(Calculator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 190, 51, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_clear = new QPushButton(Calculator);
        buttonGroup->addButton(push_clear);
        push_clear->setObjectName(QString::fromUtf8("push_clear"));
        push_clear->setGeometry(QRect(510, 30, 51, 41));
        push_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_right = new QPushButton(Calculator);
        buttonGroup->addButton(push_right);
        push_right->setObjectName(QString::fromUtf8("push_right"));
        push_right->setGeometry(QRect(260, 70, 51, 41));
        push_right->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_4 = new QPushButton(Calculator);
        buttonGroup->addButton(push_4);
        push_4->setObjectName(QString::fromUtf8("push_4"));
        push_4->setGeometry(QRect(360, 150, 51, 41));
        push_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_clear_2 = new QPushButton(Calculator);
        buttonGroup->addButton(push_clear_2);
        push_clear_2->setObjectName(QString::fromUtf8("push_clear_2"));
        push_clear_2->setGeometry(QRect(410, 70, 51, 41));
        push_clear_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_acos = new QPushButton(Calculator);
        buttonGroup->addButton(push_acos);
        push_acos->setObjectName(QString::fromUtf8("push_acos"));
        push_acos->setGeometry(QRect(260, 190, 51, 41));
        push_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_sqrt = new QPushButton(Calculator);
        buttonGroup->addButton(push_sqrt);
        push_sqrt->setObjectName(QString::fromUtf8("push_sqrt"));
        push_sqrt->setGeometry(QRect(210, 150, 51, 41));
        push_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_5 = new QPushButton(Calculator);
        buttonGroup->addButton(push_5);
        push_5->setObjectName(QString::fromUtf8("push_5"));
        push_5->setGeometry(QRect(410, 150, 51, 41));
        push_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        add_x = new QLineEdit(Calculator);
        add_x->setObjectName(QString::fromUtf8("add_x"));
        add_x->setGeometry(QRect(120, 70, 91, 41));
        add_x->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_asin = new QPushButton(Calculator);
        buttonGroup->addButton(push_asin);
        push_asin->setObjectName(QString::fromUtf8("push_asin"));
        push_asin->setGeometry(QRect(210, 190, 51, 41));
        push_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_log = new QPushButton(Calculator);
        buttonGroup->addButton(push_log);
        push_log->setObjectName(QString::fromUtf8("push_log"));
        push_log->setGeometry(QRect(260, 150, 51, 41));
        push_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_sin = new QPushButton(Calculator);
        buttonGroup->addButton(push_sin);
        push_sin->setObjectName(QString::fromUtf8("push_sin"));
        push_sin->setGeometry(QRect(210, 110, 51, 41));
        push_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_unary = new QPushButton(Calculator);
        buttonGroup->addButton(push_unary);
        push_unary->setObjectName(QString::fromUtf8("push_unary"));
        push_unary->setGeometry(QRect(360, 70, 51, 41));
        push_unary->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_mul = new QPushButton(Calculator);
        buttonGroup->addButton(push_mul);
        push_mul->setObjectName(QString::fromUtf8("push_mul"));
        push_mul->setGeometry(QRect(510, 110, 51, 41));
        push_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_cos = new QPushButton(Calculator);
        buttonGroup->addButton(push_cos);
        push_cos->setObjectName(QString::fromUtf8("push_cos"));
        push_cos->setGeometry(QRect(260, 110, 51, 41));
        push_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        add_h = new QLineEdit(Calculator);
        add_h->setObjectName(QString::fromUtf8("add_h"));
        add_h->setGeometry(QRect(120, 230, 91, 41));
        add_h->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        y_Begin = new QLineEdit(Calculator);
        y_Begin->setObjectName(QString::fromUtf8("y_Begin"));
        y_Begin->setGeometry(QRect(120, 190, 91, 41));
        y_Begin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_4 = new QLabel(Calculator);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 70, 51, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_left = new QPushButton(Calculator);
        buttonGroup->addButton(push_left);
        push_left->setObjectName(QString::fromUtf8("push_left"));
        push_left->setGeometry(QRect(310, 70, 51, 41));
        push_left->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_2 = new QLabel(Calculator);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 150, 51, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_3 = new QPushButton(Calculator);
        buttonGroup->addButton(push_3);
        push_3->setObjectName(QString::fromUtf8("push_3"));
        push_3->setGeometry(QRect(460, 190, 51, 41));
        push_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_pi = new QPushButton(Calculator);
        buttonGroup->addButton(push_pi);
        push_pi->setObjectName(QString::fromUtf8("push_pi"));
        push_pi->setGeometry(QRect(260, 230, 51, 41));
        push_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_0 = new QPushButton(Calculator);
        buttonGroup->addButton(push_0);
        push_0->setObjectName(QString::fromUtf8("push_0"));
        push_0->setGeometry(QRect(360, 230, 51, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(230, 230, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        push_0->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font.setBold(false);
        push_0->setFont(font);
        push_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_tan = new QPushButton(Calculator);
        buttonGroup->addButton(push_tan);
        push_tan->setObjectName(QString::fromUtf8("push_tan"));
        push_tan->setGeometry(QRect(310, 110, 51, 41));
        push_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_tan->setIconSize(QSize(100, 200));
        push_atan = new QPushButton(Calculator);
        buttonGroup->addButton(push_atan);
        push_atan->setObjectName(QString::fromUtf8("push_atan"));
        push_atan->setGeometry(QRect(310, 190, 51, 41));
        push_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_plus = new QPushButton(Calculator);
        buttonGroup->addButton(push_plus);
        push_plus->setObjectName(QString::fromUtf8("push_plus"));
        push_plus->setGeometry(QRect(510, 190, 51, 41));
        push_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_1 = new QPushButton(Calculator);
        buttonGroup->addButton(push_1);
        push_1->setObjectName(QString::fromUtf8("push_1"));
        push_1->setGeometry(QRect(360, 190, 51, 41));
        push_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_X = new QPushButton(Calculator);
        buttonGroup->addButton(push_X);
        push_X->setObjectName(QString::fromUtf8("push_X"));
        push_X->setGeometry(QRect(460, 70, 51, 41));
        push_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_2 = new QPushButton(Calculator);
        buttonGroup->addButton(push_2);
        push_2->setObjectName(QString::fromUtf8("push_2"));
        push_2->setGeometry(QRect(410, 190, 51, 41));
        push_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_9 = new QPushButton(Calculator);
        buttonGroup->addButton(push_9);
        push_9->setObjectName(QString::fromUtf8("push_9"));
        push_9->setGeometry(QRect(460, 110, 51, 41));
        push_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        Display = new QLineEdit(Calculator);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(210, 30, 301, 41));
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_ln = new QPushButton(Calculator);
        buttonGroup->addButton(push_ln);
        push_ln->setObjectName(QString::fromUtf8("push_ln"));
        push_ln->setGeometry(QRect(310, 150, 51, 41));
        push_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_eq = new QPushButton(Calculator);
        buttonGroup->addButton(push_eq);
        push_eq->setObjectName(QString::fromUtf8("push_eq"));
        push_eq->setGeometry(QRect(460, 230, 101, 41));
        push_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_dot = new QPushButton(Calculator);
        buttonGroup->addButton(push_dot);
        push_dot->setObjectName(QString::fromUtf8("push_dot"));
        push_dot->setGeometry(QRect(410, 230, 51, 41));
        push_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_7 = new QPushButton(Calculator);
        buttonGroup->addButton(push_7);
        push_7->setObjectName(QString::fromUtf8("push_7"));
        push_7->setGeometry(QRect(360, 110, 51, 41));
        push_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_6 = new QPushButton(Calculator);
        buttonGroup->addButton(push_6);
        push_6->setObjectName(QString::fromUtf8("push_6"));
        push_6->setGeometry(QRect(460, 150, 51, 41));
        push_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_8 = new QPushButton(Calculator);
        buttonGroup->addButton(push_8);
        push_8->setObjectName(QString::fromUtf8("push_8"));
        push_8->setGeometry(QRect(410, 110, 51, 41));
        push_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        widget = new QCustomPlot(Calculator);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 300, 491, 281));
        widget->setStyleSheet(QString::fromUtf8("QCustomPlot {\n"
"	border: 3px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_stop = new QPushButton(Calculator);
        push_stop->setObjectName(QString::fromUtf8("push_stop"));
        push_stop->setGeometry(QRect(340, 600, 221, 51));
        push_stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_run = new QPushButton(Calculator);
        push_run->setObjectName(QString::fromUtf8("push_run"));
        push_run->setGeometry(QRect(70, 600, 221, 51));
        push_run->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        tabWidget->addTab(Calculator, QString());
        CreditCalc = new QWidget();
        CreditCalc->setObjectName(QString::fromUtf8("CreditCalc"));
        CreditCalc->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #E6E6FA;\n"
"}\n"
"\n"
"QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	color: #999999;\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        gridLayoutWidget = new QWidget(CreditCalc);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 50, 503, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        type_label = new QLabel(gridLayoutWidget);
        type_label->setObjectName(QString::fromUtf8("type_label"));

        gridLayout->addWidget(type_label, 3, 0, 1, 1);

        time_label = new QLabel(gridLayoutWidget);
        time_label->setObjectName(QString::fromUtf8("time_label"));

        gridLayout->addWidget(time_label, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        type_an = new QRadioButton(gridLayoutWidget);
        type_an->setObjectName(QString::fromUtf8("type_an"));
        type_an->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));

        verticalLayout->addWidget(type_an);

        type_diff = new QRadioButton(gridLayoutWidget);
        type_diff->setObjectName(QString::fromUtf8("type_diff"));
        type_diff->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));

        verticalLayout->addWidget(type_diff);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        proz_label = new QLabel(gridLayoutWidget);
        proz_label->setObjectName(QString::fromUtf8("proz_label"));

        gridLayout->addWidget(proz_label, 2, 0, 1, 1);

        sum_label = new QLabel(gridLayoutWidget);
        sum_label->setObjectName(QString::fromUtf8("sum_label"));

        gridLayout->addWidget(sum_label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        time_year_edit = new QLineEdit(gridLayoutWidget);
        time_year_edit->setObjectName(QString::fromUtf8("time_year_edit"));

        horizontalLayout->addWidget(time_year_edit);

        time_year_line = new QLabel(gridLayoutWidget);
        time_year_line->setObjectName(QString::fromUtf8("time_year_line"));

        horizontalLayout->addWidget(time_year_line);

        time_month_edit = new QLineEdit(gridLayoutWidget);
        time_month_edit->setObjectName(QString::fromUtf8("time_month_edit"));

        horizontalLayout->addWidget(time_month_edit);

        time_month_line = new QLabel(gridLayoutWidget);
        time_month_line->setObjectName(QString::fromUtf8("time_month_line"));

        horizontalLayout->addWidget(time_month_line);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sum_edit = new QLineEdit(gridLayoutWidget);
        sum_edit->setObjectName(QString::fromUtf8("sum_edit"));

        horizontalLayout_2->addWidget(sum_edit);

        rub_line = new QLabel(gridLayoutWidget);
        rub_line->setObjectName(QString::fromUtf8("rub_line"));

        horizontalLayout_2->addWidget(rub_line);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        proz_edit = new QLineEdit(gridLayoutWidget);
        proz_edit->setObjectName(QString::fromUtf8("proz_edit"));

        horizontalLayout_3->addWidget(proz_edit);

        proz_line = new QLabel(gridLayoutWidget);
        proz_line->setObjectName(QString::fromUtf8("proz_line"));

        horizontalLayout_3->addWidget(proz_line);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        push_calc = new QPushButton(CreditCalc);
        push_calc->setObjectName(QString::fromUtf8("push_calc"));
        push_calc->setGeometry(QRect(110, 330, 441, 71));
        gridLayoutWidget_2 = new QWidget(CreditCalc);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(80, 430, 501, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        every_month_edit = new QLineEdit(gridLayoutWidget_2);
        every_month_edit->setObjectName(QString::fromUtf8("every_month_edit"));

        gridLayout_2->addWidget(every_month_edit, 0, 1, 1, 1);

        result_edit = new QLineEdit(gridLayoutWidget_2);
        result_edit->setObjectName(QString::fromUtf8("result_edit"));

        gridLayout_2->addWidget(result_edit, 2, 1, 1, 1);

        every_month_label = new QLabel(gridLayoutWidget_2);
        every_month_label->setObjectName(QString::fromUtf8("every_month_label"));

        gridLayout_2->addWidget(every_month_label, 0, 0, 1, 1);

        overpayment_edit = new QLineEdit(gridLayoutWidget_2);
        overpayment_edit->setObjectName(QString::fromUtf8("overpayment_edit"));

        gridLayout_2->addWidget(overpayment_edit, 1, 1, 1, 1);

        result_label = new QLabel(gridLayoutWidget_2);
        result_label->setObjectName(QString::fromUtf8("result_label"));

        gridLayout_2->addWidget(result_label, 2, 0, 1, 1);

        overpayment_label = new QLabel(gridLayoutWidget_2);
        overpayment_label->setObjectName(QString::fromUtf8("overpayment_label"));

        gridLayout_2->addWidget(overpayment_label, 1, 0, 1, 1);

        tabWidget->addTab(CreditCalc, QString());
        DepositCalc = new QWidget();
        DepositCalc->setObjectName(QString::fromUtf8("DepositCalc"));
        DepositCalc->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #E6E6FA;\n"
"}\n"
"\n"
"QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QComboBox {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QDateEdit {\n"
"	color: #000000;\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        gridLayoutWidget_3 = new QWidget(DepositCalc);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(80, 40, 492, 399));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        time_label_2 = new QLabel(gridLayoutWidget_3);
        time_label_2->setObjectName(QString::fromUtf8("time_label_2"));

        gridLayout_3->addWidget(time_label_2, 1, 0, 1, 1);

        sum_deposit = new QLineEdit(gridLayoutWidget_3);
        sum_deposit->setObjectName(QString::fromUtf8("sum_deposit"));

        gridLayout_3->addWidget(sum_deposit, 0, 1, 1, 1);

        tax_rate = new QLineEdit(gridLayoutWidget_3);
        tax_rate->setObjectName(QString::fromUtf8("tax_rate"));

        gridLayout_3->addWidget(tax_rate, 4, 1, 1, 1);

        period_label = new QLabel(gridLayoutWidget_3);
        period_label->setObjectName(QString::fromUtf8("period_label"));

        gridLayout_3->addWidget(period_label, 5, 0, 1, 1);

        proz_label_2 = new QLabel(gridLayoutWidget_3);
        proz_label_2->setObjectName(QString::fromUtf8("proz_label_2"));

        gridLayout_3->addWidget(proz_label_2, 3, 0, 1, 1);

        sum_label_2 = new QLabel(gridLayoutWidget_3);
        sum_label_2->setObjectName(QString::fromUtf8("sum_label_2"));

        gridLayout_3->addWidget(sum_label_2, 0, 0, 1, 1);

        nalog_label = new QLabel(gridLayoutWidget_3);
        nalog_label->setObjectName(QString::fromUtf8("nalog_label"));

        gridLayout_3->addWidget(nalog_label, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        interest_rate = new QLineEdit(gridLayoutWidget_3);
        interest_rate->setObjectName(QString::fromUtf8("interest_rate"));

        horizontalLayout_4->addWidget(interest_rate);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        term_deposit = new QLineEdit(gridLayoutWidget_3);
        term_deposit->setObjectName(QString::fromUtf8("term_deposit"));

        horizontalLayout_5->addWidget(term_deposit);

        comboBox = new QComboBox(gridLayoutWidget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        begin_data_label = new QLabel(gridLayoutWidget_3);
        begin_data_label->setObjectName(QString::fromUtf8("begin_data_label"));

        gridLayout_3->addWidget(begin_data_label, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frequency_of_pay = new QComboBox(gridLayoutWidget_3);
        frequency_of_pay->addItem(QString());
        frequency_of_pay->addItem(QString());
        frequency_of_pay->addItem(QString());
        frequency_of_pay->setObjectName(QString::fromUtf8("frequency_of_pay"));

        verticalLayout_2->addWidget(frequency_of_pay);

        capital = new QRadioButton(gridLayoutWidget_3);
        capital->setObjectName(QString::fromUtf8("capital"));
        capital->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));

        verticalLayout_2->addWidget(capital);


        gridLayout_3->addLayout(verticalLayout_2, 5, 1, 1, 1);

        data_begin_term = new QDateEdit(gridLayoutWidget_3);
        data_begin_term->setObjectName(QString::fromUtf8("data_begin_term"));

        gridLayout_3->addWidget(data_begin_term, 2, 1, 1, 1);

        push_deposit = new QPushButton(DepositCalc);
        push_deposit->setObjectName(QString::fromUtf8("push_deposit"));
        push_deposit->setGeometry(QRect(280, 620, 93, 29));
        gridLayoutWidget_4 = new QWidget(DepositCalc);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(80, 470, 491, 98));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        oversum = new QLineEdit(gridLayoutWidget_4);
        oversum->setObjectName(QString::fromUtf8("oversum"));

        gridLayout_4->addWidget(oversum, 2, 1, 1, 1);

        tax_sum = new QLineEdit(gridLayoutWidget_4);
        tax_sum->setObjectName(QString::fromUtf8("tax_sum"));

        gridLayout_4->addWidget(tax_sum, 1, 1, 1, 1);

        deposit_sum = new QLineEdit(gridLayoutWidget_4);
        deposit_sum->setObjectName(QString::fromUtf8("deposit_sum"));

        gridLayout_4->addWidget(deposit_sum, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        tabWidget->addTab(DepositCalc, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "h", nullptr));
        push_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        graph->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        push_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        push_e->setText(QString());
        push_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        push_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        x_Begin->setText(QCoreApplication::translate("MainWindow", "-100", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "yBegin", nullptr));
        push_clear->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        push_right->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        push_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        push_clear_2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        push_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        push_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        push_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        add_x->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        push_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        push_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        push_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        push_unary->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        push_mul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        push_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        add_h->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        y_Begin->setText(QCoreApplication::translate("MainWindow", "-100", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
        push_left->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "xBegin", nullptr));
        push_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        push_pi->setText(QString());
        push_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        push_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        push_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        push_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        push_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        push_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        push_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        push_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        push_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        push_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        push_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        push_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        push_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        push_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        push_stop->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        push_run->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Calculator), QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        type_label->setText(QCoreApplication::translate("MainWindow", "Type of Payment", nullptr));
        time_label->setText(QCoreApplication::translate("MainWindow", "Loan Term", nullptr));
        type_an->setText(QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        type_diff->setText(QCoreApplication::translate("MainWindow", "Differentiated", nullptr));
        proz_label->setText(QCoreApplication::translate("MainWindow", "Interest Rate", nullptr));
        sum_label->setText(QCoreApplication::translate("MainWindow", "Loan Amount", nullptr));
        time_year_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        time_year_line->setText(QCoreApplication::translate("MainWindow", "years", nullptr));
        time_month_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        time_month_line->setText(QCoreApplication::translate("MainWindow", "months", nullptr));
        sum_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        rub_line->setText(QCoreApplication::translate("MainWindow", "rub", nullptr));
        proz_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        proz_line->setText(QCoreApplication::translate("MainWindow", " %   ", nullptr));
        push_calc->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        every_month_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        result_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        every_month_label->setText(QCoreApplication::translate("MainWindow", "Payment Every Month", nullptr));
        overpayment_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        result_label->setText(QCoreApplication::translate("MainWindow", "Total Amount", nullptr));
        overpayment_label->setText(QCoreApplication::translate("MainWindow", "Total of Payments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CreditCalc), QCoreApplication::translate("MainWindow", "CreditCalc", nullptr));
        time_label_2->setText(QCoreApplication::translate("MainWindow", "Term", nullptr));
        sum_deposit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        tax_rate->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        period_label->setText(QCoreApplication::translate("MainWindow", "Frequency of Payments", nullptr));
        proz_label_2->setText(QCoreApplication::translate("MainWindow", "Interest Rate", nullptr));
        sum_label_2->setText(QCoreApplication::translate("MainWindow", "Deposit Amount, rub", nullptr));
        nalog_label->setText(QCoreApplication::translate("MainWindow", "Tax Rate", nullptr));
        interest_rate->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        term_deposit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "days", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "months", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "years", nullptr));

        begin_data_label->setText(QCoreApplication::translate("MainWindow", "Begin of Term", nullptr));
        frequency_of_pay->setItemText(0, QCoreApplication::translate("MainWindow", "every day", nullptr));
        frequency_of_pay->setItemText(1, QCoreApplication::translate("MainWindow", "once a month", nullptr));
        frequency_of_pay->setItemText(2, QCoreApplication::translate("MainWindow", "at the end of the term", nullptr));

        capital->setText(QCoreApplication::translate("MainWindow", "Interest Capitalization", nullptr));
        push_deposit->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        oversum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        tax_sum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        deposit_sum->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Result Amount                ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Tax Amount", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Aggregate\n"
"Interest Amount", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DepositCalc), QCoreApplication::translate("MainWindow", "DepositCalc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
