#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <cstring>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
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

void MainWindow::on_push_pow_clicked() { clicked_text_add("pow"); }

void MainWindow::on_push_mod_clicked() { clicked_text_add("mod"); }

void MainWindow::on_push_pi_clicked() { clicked_text_add("pi"); }

void MainWindow::on_push_e_clicked() { clicked_text_add("e"); }

void MainWindow::on_push_ln_clicked() { clicked_text_add("ln"); }

void MainWindow::on_push_right_clicked() { clicked_text_add("("); }

void MainWindow::on_push_left_clicked() { clicked_text_add(")"); }

void MainWindow::on_push_log_clicked() { clicked_text_add("log"); }


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



void MainWindow::on_push_X_clicked() { clicked_text_add("x"); }

void MainWindow::TimerSlot() {
    ui->widget->clearGraphs();
    QString input = ui->Display->text();
    char c_input[512] = {0};

    if (time <= 20 * N) {
        if (X <= xEnd) {
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

void MainWindow::on_push_dot_clicked() { clicked_text_add("."); }

void MainWindow::on_push_clear_2_clicked() {
    ui->Display->clear();
    if (graph)
        ui->widget->clearGraphs();
}


void MainWindow::on_graph_clicked(bool checked) { if (checked) graph = 1; }

void MainWindow::Animation() {
           timer = new QTimer(this);
           connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
           ui->widget->clearGraphs();
           timer->start(20);
           X = xBegin;
           x.clear();
           y.clear();
}

void MainWindow::if_graph_exist() {
    QString input = ui->Display->text();
    char c_input[512] = {0};

    strncpy(c_input, qPrintable(input), 255);

    QString xB = ui->x_Begin->text();
    xBegin = xB.toDouble();
    QString yB = ui->y_Begin->text();
    yBegin = yB.toDouble();
    QString add_h = ui->add_h->text();
    h = add_h.toDouble();

    xEnd = -xBegin + h;
    yEnd = -yBegin + h;

    ui->widget->addGraph();
//    QLinearGradient background;
//    background.setColorAt(0, QColor(30, 30, 30));
//    ui->widget->setBackground(background);

//    QLinearGradient axisBackground;
//    axisBackground.setColorAt(0, QColor(30, 30, 30));
//    ui->widget->axisRect()->setBackground(axisBackground);

//    ui->widget->xAxis->setTickLabelColor(Qt::white);
//    ui->widget->yAxis->setTickLabelColor(Qt::white);
//    ui->widget->xAxis->setBasePen(QPen(Qt::white, 2));
//    ui->widget->yAxis->setBasePen(QPen(Qt::white, 2));
//    ui->widget->xAxis->setTickPen(QPen(Qt::white, 2));
//    ui->widget->yAxis->setTickPen(QPen(Qt::white, 2));
//    ui->widget->xAxis->setSubTickPen(QPen(Qt::white, 2));
//    ui->widget->yAxis->setSubTickPen(QPen(Qt::white, 2));

//    QPen Pen;
//    Pen.setColor(QColor(Qt::red));
//    Pen.setWidthF(2);
//    ui->widget->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
//    ui->widget->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
//    ui->widget->addGraph();

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);

    N = (xEnd - xBegin)/h + 2;
      for (X = xBegin; X < N; X += h) {
          strncpy(c_input, qPrintable(input), 255);
          double result = smart_calc(c_input, X);

          if (result != NAN && result != INFINITY && result != -INFINITY) {
              x.push_back(X);
              y.push_back(result);
          }

      }

    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

     Animation();
    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
}

void MainWindow::if_graph_not_exist() {
    QString input = ui->Display->text();
    char c_input[512] = {0};
    strncpy(c_input, qPrintable(input), 255);

    QString add_x = ui->add_x->text();
    char c_add_x[256] = "";
    strncpy(c_add_x, qPrintable(add_x), 255);

    if (!strcmp(c_add_x, ""))
                ui->add_x->setText("error");
    else {
        X = add_x.toDouble();
        double result = smart_calc(c_input, X);
        QString result_string = QString::number(result);
        ui->Display->clear();
        ui->Display->setText(result_string);
    }
}


