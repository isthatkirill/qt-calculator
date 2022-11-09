#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "secondwindow.h"

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_action_C_Calculator_triggered();

    void on_action_S_String_operations_triggered();

    void on_action_H_Hide_triggered();

    void on_action_A_About_triggered();

private:
    Ui::Window *ui;
    MainWindow *MainWindowWin;
    SecondWindow *SecondWindowWin;

};

#endif // WINDOW_H
