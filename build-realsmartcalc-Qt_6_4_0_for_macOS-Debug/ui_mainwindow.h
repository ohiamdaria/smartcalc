/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *time_label_2;
    QLabel *period_label;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_3;
    QRadioButton *radioButton;
    QLabel *nalog_label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QDateEdit *dateEdit_6;
    QLabel *proz_label_2;
    QLineEdit *lineEdit_6;
    QLabel *begin_data_label;
    QLabel *sum_label_2;
    QVBoxLayout *widgets_frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *replenishment_label;
    QPushButton *addDeposit_button;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QPushButton *addWithdrawal_button;
    QVBoxLayout *widgets_frame2;
    QPushButton *pushButton;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
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
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 671, 711));
        tabWidget->setMinimumSize(QSize(671, 711));
        tabWidget->setMaximumSize(QSize(671, 711));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"	color: #E6E6FA;\n"
"}"));
        Calculator = new QWidget();
        Calculator->setObjectName("Calculator");
        Calculator->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_3 = new QLabel(Calculator);
        label_3->setObjectName("label_3");
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
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(push_minus);
        push_minus->setObjectName("push_minus");
        push_minus->setGeometry(QRect(510, 150, 51, 41));
        push_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        graph = new QRadioButton(Calculator);
        graph->setObjectName("graph");
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
        push_div->setObjectName("push_div");
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
        push_e->setObjectName("push_e");
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
        push_mod->setObjectName("push_mod");
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
        push_pow->setObjectName("push_pow");
        push_pow->setGeometry(QRect(210, 70, 51, 41));
        push_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        x_Begin = new QLineEdit(Calculator);
        x_Begin->setObjectName("x_Begin");
        x_Begin->setGeometry(QRect(120, 150, 91, 41));
        x_Begin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label = new QLabel(Calculator);
        label->setObjectName("label");
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
        push_clear->setObjectName("push_clear");
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
        push_right->setObjectName("push_right");
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
        push_4->setObjectName("push_4");
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
        push_clear_2->setObjectName("push_clear_2");
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
        push_acos->setObjectName("push_acos");
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
        push_sqrt->setObjectName("push_sqrt");
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
        push_5->setObjectName("push_5");
        push_5->setGeometry(QRect(410, 150, 51, 41));
        push_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        add_x = new QLineEdit(Calculator);
        add_x->setObjectName("add_x");
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
        push_asin->setObjectName("push_asin");
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
        push_log->setObjectName("push_log");
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
        push_sin->setObjectName("push_sin");
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
        push_unary->setObjectName("push_unary");
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
        push_mul->setObjectName("push_mul");
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
        push_cos->setObjectName("push_cos");
        push_cos->setGeometry(QRect(260, 110, 51, 41));
        push_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        add_h = new QLineEdit(Calculator);
        add_h->setObjectName("add_h");
        add_h->setGeometry(QRect(120, 230, 91, 41));
        add_h->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        y_Begin = new QLineEdit(Calculator);
        y_Begin->setObjectName("y_Begin");
        y_Begin->setGeometry(QRect(120, 190, 91, 41));
        y_Begin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: #000000;\n"
"	background-color: #F8F8FF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_4 = new QLabel(Calculator);
        label_4->setObjectName("label_4");
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
        push_left->setObjectName("push_left");
        push_left->setGeometry(QRect(310, 70, 51, 41));
        push_left->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #D8BFD8;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        label_2 = new QLabel(Calculator);
        label_2->setObjectName("label_2");
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
        push_3->setObjectName("push_3");
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
        push_pi->setObjectName("push_pi");
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
        push_0->setObjectName("push_0");
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
        push_tan->setObjectName("push_tan");
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
        push_atan->setObjectName("push_atan");
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
        push_plus->setObjectName("push_plus");
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
        push_1->setObjectName("push_1");
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
        push_X->setObjectName("push_X");
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
        push_2->setObjectName("push_2");
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
        push_9->setObjectName("push_9");
        push_9->setGeometry(QRect(460, 110, 51, 41));
        push_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        Display = new QLineEdit(Calculator);
        Display->setObjectName("Display");
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
        push_ln->setObjectName("push_ln");
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
        push_eq->setObjectName("push_eq");
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
        push_dot->setObjectName("push_dot");
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
        push_7->setObjectName("push_7");
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
        push_6->setObjectName("push_6");
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
        push_8->setObjectName("push_8");
        push_8->setGeometry(QRect(410, 110, 51, 41));
        push_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #E6E6FA;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        widget = new QCustomPlot(Calculator);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 300, 491, 281));
        widget->setStyleSheet(QString::fromUtf8("QCustomPlot {\n"
"	border: 3px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_stop = new QPushButton(Calculator);
        push_stop->setObjectName("push_stop");
        push_stop->setGeometry(QRect(340, 600, 221, 51));
        push_stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #000000;\n"
"	background-color: #778899;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        push_run = new QPushButton(Calculator);
        push_run->setObjectName("push_run");
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
        CreditCalc->setObjectName("CreditCalc");
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
"	color: #000000;\n"
"	background-color: #FFFFFF;\n"
"	border: 1px solid black;\n"
"    border-radius: 2px;\n"
"    padding: 1px;\n"
"}"));
        gridLayoutWidget = new QWidget(CreditCalc);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 30, 503, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        type_label = new QLabel(gridLayoutWidget);
        type_label->setObjectName("type_label");

        gridLayout->addWidget(type_label, 3, 0, 1, 1);

        time_label = new QLabel(gridLayoutWidget);
        time_label->setObjectName("time_label");

        gridLayout->addWidget(time_label, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        type_an = new QRadioButton(gridLayoutWidget);
        type_an->setObjectName("type_an");

        verticalLayout->addWidget(type_an);

        type_diff = new QRadioButton(gridLayoutWidget);
        type_diff->setObjectName("type_diff");

        verticalLayout->addWidget(type_diff);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        proz_label = new QLabel(gridLayoutWidget);
        proz_label->setObjectName("proz_label");

        gridLayout->addWidget(proz_label, 2, 0, 1, 1);

        sum_label = new QLabel(gridLayoutWidget);
        sum_label->setObjectName("sum_label");

        gridLayout->addWidget(sum_label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        time_year_edit = new QLineEdit(gridLayoutWidget);
        time_year_edit->setObjectName("time_year_edit");

        horizontalLayout->addWidget(time_year_edit);

        time_year_line = new QLabel(gridLayoutWidget);
        time_year_line->setObjectName("time_year_line");

        horizontalLayout->addWidget(time_year_line);

        time_month_edit = new QLineEdit(gridLayoutWidget);
        time_month_edit->setObjectName("time_month_edit");

        horizontalLayout->addWidget(time_month_edit);

        time_month_line = new QLabel(gridLayoutWidget);
        time_month_line->setObjectName("time_month_line");

        horizontalLayout->addWidget(time_month_line);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sum_edit = new QLineEdit(gridLayoutWidget);
        sum_edit->setObjectName("sum_edit");

        horizontalLayout_2->addWidget(sum_edit);

        rub_line = new QLabel(gridLayoutWidget);
        rub_line->setObjectName("rub_line");

        horizontalLayout_2->addWidget(rub_line);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        proz_edit = new QLineEdit(gridLayoutWidget);
        proz_edit->setObjectName("proz_edit");

        horizontalLayout_3->addWidget(proz_edit);

        proz_line = new QLabel(gridLayoutWidget);
        proz_line->setObjectName("proz_line");

        horizontalLayout_3->addWidget(proz_line);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        push_calc = new QPushButton(CreditCalc);
        push_calc->setObjectName("push_calc");
        push_calc->setGeometry(QRect(110, 310, 441, 71));
        gridLayoutWidget_2 = new QWidget(CreditCalc);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(80, 410, 511, 171));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        every_month_edit = new QLineEdit(gridLayoutWidget_2);
        every_month_edit->setObjectName("every_month_edit");

        gridLayout_2->addWidget(every_month_edit, 0, 1, 1, 1);

        result_edit = new QLineEdit(gridLayoutWidget_2);
        result_edit->setObjectName("result_edit");

        gridLayout_2->addWidget(result_edit, 2, 1, 1, 1);

        every_month_label = new QLabel(gridLayoutWidget_2);
        every_month_label->setObjectName("every_month_label");

        gridLayout_2->addWidget(every_month_label, 0, 0, 1, 1);

        overpayment_edit = new QLineEdit(gridLayoutWidget_2);
        overpayment_edit->setObjectName("overpayment_edit");

        gridLayout_2->addWidget(overpayment_edit, 1, 1, 1, 1);

        result_label = new QLabel(gridLayoutWidget_2);
        result_label->setObjectName("result_label");

        gridLayout_2->addWidget(result_label, 2, 0, 1, 1);

        overpayment_label = new QLabel(gridLayoutWidget_2);
        overpayment_label->setObjectName("overpayment_label");

        gridLayout_2->addWidget(overpayment_label, 1, 0, 1, 1);

        tabWidget->addTab(CreditCalc, QString());
        DepositCalc = new QWidget();
        DepositCalc->setObjectName("DepositCalc");
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
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(80, 40, 492, 399));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        comboBox_2 = new QComboBox(gridLayoutWidget_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_4->addWidget(comboBox_2);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_4->addWidget(lineEdit_3);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_3);
        lineEdit->setObjectName("lineEdit");

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        time_label_2 = new QLabel(gridLayoutWidget_3);
        time_label_2->setObjectName("time_label_2");

        gridLayout_3->addWidget(time_label_2, 1, 0, 1, 1);

        period_label = new QLabel(gridLayoutWidget_3);
        period_label->setObjectName("period_label");

        gridLayout_3->addWidget(period_label, 5, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox_3 = new QComboBox(gridLayoutWidget_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout_2->addWidget(comboBox_3);

        radioButton = new QRadioButton(gridLayoutWidget_3);
        radioButton->setObjectName("radioButton");

        verticalLayout_2->addWidget(radioButton);


        gridLayout_3->addLayout(verticalLayout_2, 5, 1, 1, 1);

        nalog_label = new QLabel(gridLayoutWidget_3);
        nalog_label->setObjectName("nalog_label");

        gridLayout_3->addWidget(nalog_label, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_2 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_5->addWidget(lineEdit_2);

        comboBox = new QComboBox(gridLayoutWidget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_5->addWidget(comboBox);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        dateEdit_6 = new QDateEdit(gridLayoutWidget_3);
        dateEdit_6->setObjectName("dateEdit_6");

        gridLayout_3->addWidget(dateEdit_6, 2, 1, 1, 1);

        proz_label_2 = new QLabel(gridLayoutWidget_3);
        proz_label_2->setObjectName("proz_label_2");

        gridLayout_3->addWidget(proz_label_2, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_3);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout_3->addWidget(lineEdit_6, 4, 1, 1, 1);

        begin_data_label = new QLabel(gridLayoutWidget_3);
        begin_data_label->setObjectName("begin_data_label");

        gridLayout_3->addWidget(begin_data_label, 2, 0, 1, 1);

        sum_label_2 = new QLabel(gridLayoutWidget_3);
        sum_label_2->setObjectName("sum_label_2");

        gridLayout_3->addWidget(sum_label_2, 0, 0, 1, 1);

        widgets_frame = new QVBoxLayout();
        widgets_frame->setObjectName("widgets_frame");

        gridLayout_3->addLayout(widgets_frame, 6, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        replenishment_label = new QLabel(gridLayoutWidget_3);
        replenishment_label->setObjectName("replenishment_label");

        verticalLayout_3->addWidget(replenishment_label);

        addDeposit_button = new QPushButton(gridLayoutWidget_3);
        addDeposit_button->setObjectName("addDeposit_button");

        verticalLayout_3->addWidget(addDeposit_button);


        gridLayout_3->addLayout(verticalLayout_3, 6, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        addWithdrawal_button = new QPushButton(gridLayoutWidget_3);
        addWithdrawal_button->setObjectName("addWithdrawal_button");

        verticalLayout_4->addWidget(addWithdrawal_button);


        gridLayout_3->addLayout(verticalLayout_4, 8, 0, 1, 1);

        widgets_frame2 = new QVBoxLayout();
        widgets_frame2->setObjectName("widgets_frame2");

        gridLayout_3->addLayout(widgets_frame2, 8, 1, 1, 1);

        pushButton = new QPushButton(DepositCalc);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 450, 93, 29));
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
        type_label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        time_label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        type_an->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        type_diff->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        proz_label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        sum_label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        time_year_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        time_year_line->setText(QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));
        time_month_edit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        time_month_line->setText(QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        sum_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        rub_line->setText(QCoreApplication::translate("MainWindow", "\321\200\321\203\320\261.", nullptr));
        proz_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        proz_line->setText(QCoreApplication::translate("MainWindow", " %   ", nullptr));
        push_calc->setText(QCoreApplication::translate("MainWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        every_month_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        result_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        every_month_label->setText(QCoreApplication::translate("MainWindow", " \320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:          ", nullptr));
        overpayment_edit->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        result_label->setText(QCoreApplication::translate("MainWindow", " \320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        overpayment_label->setText(QCoreApplication::translate("MainWindow", " \320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CreditCalc), QCoreApplication::translate("MainWindow", "CreditCalc", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "fixed", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "depends on the amount", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "depends on the term", nullptr));

        time_label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        period_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "every day", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "once a month", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "once a quarter", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "once a year", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "at the end of the term", nullptr));

        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        nalog_label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "days", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "months", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "years", nullptr));

        proz_label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        begin_data_label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        sum_label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260, \321\200\321\203\320\261.", nullptr));
        replenishment_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        addDeposit_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\321\217\321\202\320\270\321\217", nullptr));
        addWithdrawal_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DepositCalc), QCoreApplication::translate("MainWindow", "DepositCalc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
