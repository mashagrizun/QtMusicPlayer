#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>

class BaseWindow : public QMainWindow
{
    Q_OBJECT

public:
    BaseWindow(QWidget *parent = 0);
    ~BaseWindow();
};

#endif // BASEWINDOW_H
