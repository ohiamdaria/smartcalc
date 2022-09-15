#ifndef SEQOND_WINDOW_H
#define SEQOND_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class seqond_window; }
QT_END_NAMESPACE

class seqond_window : public QMainWindow
{
    Q_OBJECT

public:
    seqond_window(QWidget *parent = nullptr);
    ~seqond_window();

private:
    Ui::seqond_window *ui;
};
#endif // SEQOND_WINDOW_H
