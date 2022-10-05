/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditcalc
{
public:
    QAction *actionCredit;
    QWidget *centralwidget;
    QPushButton *push_calc;
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
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *every_month_edit;
    QLineEdit *result_edit;
    QLabel *every_month_label;
    QLineEdit *overpayment_edit;
    QLabel *result_label;
    QLabel *overpayment_label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *creditcalc)
    {
        if (creditcalc->objectName().isEmpty())
            creditcalc->setObjectName("creditcalc");
        creditcalc->resize(587, 658);
        actionCredit = new QAction(creditcalc);
        actionCredit->setObjectName("actionCredit");
        centralwidget = new QWidget(creditcalc);
        centralwidget->setObjectName("centralwidget");
        push_calc = new QPushButton(centralwidget);
        push_calc->setObjectName("push_calc");
        push_calc->setGeometry(QRect(70, 330, 441, 71));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 50, 503, 251));
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

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(40, 430, 471, 171));
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

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 291, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 0, 301, 31));
        creditcalc->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(creditcalc);
        statusbar->setObjectName("statusbar");
        creditcalc->setStatusBar(statusbar);

        retranslateUi(creditcalc);

        QMetaObject::connectSlotsByName(creditcalc);
    } // setupUi

    void retranslateUi(QMainWindow *creditcalc)
    {
        creditcalc->setWindowTitle(QCoreApplication::translate("creditcalc", "creditcalc", nullptr));
        actionCredit->setText(QCoreApplication::translate("creditcalc", "Credit", nullptr));
        push_calc->setText(QCoreApplication::translate("creditcalc", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        type_label->setText(QCoreApplication::translate("creditcalc", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        time_label->setText(QCoreApplication::translate("creditcalc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        type_an->setText(QCoreApplication::translate("creditcalc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\320\275\321\202\320\275\321\213\320\271", nullptr));
        type_diff->setText(QCoreApplication::translate("creditcalc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        proz_label->setText(QCoreApplication::translate("creditcalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        sum_label->setText(QCoreApplication::translate("creditcalc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        time_year_edit->setText(QCoreApplication::translate("creditcalc", "0", nullptr));
        time_year_line->setText(QCoreApplication::translate("creditcalc", "\320\273\320\265\321\202", nullptr));
        time_month_edit->setText(QCoreApplication::translate("creditcalc", "0", nullptr));
        time_month_line->setText(QCoreApplication::translate("creditcalc", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        sum_edit->setText(QCoreApplication::translate("creditcalc", "0.0", nullptr));
        rub_line->setText(QCoreApplication::translate("creditcalc", "\321\200\321\203\320\261.", nullptr));
        proz_edit->setText(QCoreApplication::translate("creditcalc", "0.0", nullptr));
        proz_line->setText(QCoreApplication::translate("creditcalc", " %   ", nullptr));
        every_month_edit->setText(QCoreApplication::translate("creditcalc", "0.0", nullptr));
        result_edit->setText(QCoreApplication::translate("creditcalc", "0.0", nullptr));
        every_month_label->setText(QCoreApplication::translate("creditcalc", " \320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:          ", nullptr));
        overpayment_edit->setText(QCoreApplication::translate("creditcalc", "0.0", nullptr));
        result_label->setText(QCoreApplication::translate("creditcalc", " \320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        overpayment_label->setText(QCoreApplication::translate("creditcalc", " \320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        pushButton->setText(QCoreApplication::translate("creditcalc", "Calculator", nullptr));
        pushButton_2->setText(QCoreApplication::translate("creditcalc", "Depositcalc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditcalc: public Ui_creditcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H
