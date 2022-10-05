/********************************************************************************
** Form generated from reading UI file 'depositcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITCALC_H
#define UI_DEPOSITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_depositcalc
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *time_label;
    QLabel *period_label;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_3;
    QRadioButton *radioButton;
    QLabel *nalog_label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QDateEdit *dateEdit_6;
    QLabel *proz_label;
    QLineEdit *lineEdit_6;
    QLabel *begin_data_label;
    QLabel *sum_label;
    QVBoxLayout *widgets_frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *replenishment_label;
    QPushButton *addDeposit_button;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QPushButton *addWithdrawal_button;
    QVBoxLayout *widgets_frame2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *depositcalc)
    {
        if (depositcalc->objectName().isEmpty())
            depositcalc->setObjectName("depositcalc");
        depositcalc->resize(732, 681);
        centralwidget = new QWidget(depositcalc);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(120, 60, 492, 399));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_2->addWidget(lineEdit_3);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        time_label = new QLabel(gridLayoutWidget);
        time_label->setObjectName("time_label");

        gridLayout->addWidget(time_label, 1, 0, 1, 1);

        period_label = new QLabel(gridLayoutWidget);
        period_label->setObjectName("period_label");

        gridLayout->addWidget(period_label, 5, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout->addWidget(comboBox_3);

        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);


        gridLayout->addLayout(verticalLayout, 5, 1, 1, 1);

        nalog_label = new QLabel(gridLayoutWidget);
        nalog_label->setObjectName("nalog_label");

        gridLayout->addWidget(nalog_label, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        dateEdit_6 = new QDateEdit(gridLayoutWidget);
        dateEdit_6->setObjectName("dateEdit_6");

        gridLayout->addWidget(dateEdit_6, 2, 1, 1, 1);

        proz_label = new QLabel(gridLayoutWidget);
        proz_label->setObjectName("proz_label");

        gridLayout->addWidget(proz_label, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 4, 1, 1, 1);

        begin_data_label = new QLabel(gridLayoutWidget);
        begin_data_label->setObjectName("begin_data_label");

        gridLayout->addWidget(begin_data_label, 2, 0, 1, 1);

        sum_label = new QLabel(gridLayoutWidget);
        sum_label->setObjectName("sum_label");

        gridLayout->addWidget(sum_label, 0, 0, 1, 1);

        widgets_frame = new QVBoxLayout();
        widgets_frame->setObjectName("widgets_frame");

        gridLayout->addLayout(widgets_frame, 6, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        replenishment_label = new QLabel(gridLayoutWidget);
        replenishment_label->setObjectName("replenishment_label");

        verticalLayout_2->addWidget(replenishment_label);

        addDeposit_button = new QPushButton(gridLayoutWidget);
        addDeposit_button->setObjectName("addDeposit_button");

        verticalLayout_2->addWidget(addDeposit_button);


        gridLayout->addLayout(verticalLayout_2, 6, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        addWithdrawal_button = new QPushButton(gridLayoutWidget);
        addWithdrawal_button->setObjectName("addWithdrawal_button");

        verticalLayout_3->addWidget(addWithdrawal_button);


        gridLayout->addLayout(verticalLayout_3, 8, 0, 1, 1);

        widgets_frame2 = new QVBoxLayout();
        widgets_frame2->setObjectName("widgets_frame2");

        gridLayout->addLayout(widgets_frame2, 8, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 470, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 361, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 0, 371, 29));
        depositcalc->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(depositcalc);
        statusbar->setObjectName("statusbar");
        depositcalc->setStatusBar(statusbar);

        retranslateUi(depositcalc);

        QMetaObject::connectSlotsByName(depositcalc);
    } // setupUi

    void retranslateUi(QMainWindow *depositcalc)
    {
        depositcalc->setWindowTitle(QCoreApplication::translate("depositcalc", "depositcalc", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("depositcalc", "fixed", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("depositcalc", "depends on the amount", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("depositcalc", "depends on the term", nullptr));

        time_label->setText(QCoreApplication::translate("depositcalc", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        period_label->setText(QCoreApplication::translate("depositcalc", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("depositcalc", "every day", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("depositcalc", "once a month", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("depositcalc", "once a quarter", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("depositcalc", "once a year", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("depositcalc", "at the end of the term", nullptr));

        radioButton->setText(QCoreApplication::translate("depositcalc", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        nalog_label->setText(QCoreApplication::translate("depositcalc", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("depositcalc", "days", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("depositcalc", "months", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("depositcalc", "years", nullptr));

        proz_label->setText(QCoreApplication::translate("depositcalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        begin_data_label->setText(QCoreApplication::translate("depositcalc", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        sum_label->setText(QCoreApplication::translate("depositcalc", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260, \321\200\321\203\320\261.", nullptr));
        replenishment_label->setText(QCoreApplication::translate("depositcalc", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        addDeposit_button->setText(QCoreApplication::translate("depositcalc", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("depositcalc", "\320\241\320\275\321\217\321\202\320\270\321\217", nullptr));
        addWithdrawal_button->setText(QCoreApplication::translate("depositcalc", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("depositcalc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("depositcalc", "Calculator", nullptr));
        pushButton_3->setText(QCoreApplication::translate("depositcalc", "Creditcalc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositcalc: public Ui_depositcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITCALC_H
