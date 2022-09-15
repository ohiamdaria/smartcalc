#include "seqond_window.h"
#include "ui_seqond_window.h"

seqond_window::seqond_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::seqond_window)
{
    ui->setupUi(this);
}

seqond_window::~seqond_window()
{
    delete ui;
}

