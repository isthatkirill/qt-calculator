#include "window.h"
#include "ui_window.h"
#include "mainwindow.h"
#include <QPixmap>
#include <QMessageBox>


Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}

void Window::on_pushButton_clicked()
{
    MainWindowWin = new MainWindow();
    MainWindowWin -> show();
}

void Window::on_pushButton_2_clicked()
{
    SecondWindowWin = new SecondWindow();
    SecondWindowWin -> show();
}

void Window::on_action_C_Calculator_triggered()
{
    hide();
    MainWindowWin = new MainWindow();
    MainWindowWin -> show();
}

void Window::on_action_S_String_operations_triggered()
{
    hide();
    SecondWindowWin = new SecondWindow();
    SecondWindowWin -> show();
}

void Window::on_action_H_Hide_triggered()
{
    close();
}

void Window::on_action_A_About_triggered()
{
    QMessageBox::information(this, "About", "Лабораторная №6\nАвтор: Емельянов Кирилл\nГруппа: ИКПИ-12");
}


