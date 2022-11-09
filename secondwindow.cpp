#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_actionClear_left_box_triggered()
{
    ui->lineEdit->setText("");
    ui->statusBar->showMessage("[left] Cleared.");
}

void SecondWindow::on_actionClear_right_box_triggered()
{
    ui->lineEdit_2->setText("");
    ui->statusBar->showMessage("[right] Cleared.");
}

void SecondWindow::on_actionFrom_left_box_to_right_triggered()
{
     ui->lineEdit_2->setText(ui->lineEdit->text());
     ui->statusBar->showMessage("Moved from left box to the right.");
}

void SecondWindow::on_actionFrom_right_box_to_left_box_triggered()
{
    ui->lineEdit->setText(ui->lineEdit_2->text());
    ui->statusBar->showMessage("Moved from right box to the left.");
}

void SecondWindow::on_actionSwap_triggered()
{
    QString s = ui->lineEdit->text();
    ui->lineEdit->setText(ui->lineEdit_2->text());
    ui->lineEdit_2->setText(s);
    ui->statusBar->showMessage("Swapped.");
}

void SecondWindow::on_actionClear_All_triggered()
{
    SecondWindow::on_actionClear_left_box_triggered();
    SecondWindow::on_actionClear_right_box_triggered();
    ui->statusBar->showMessage("[all] Cleared.");
}

void SecondWindow::on_actionReverse_left_box_triggered()
{
    QString temp = ui->lineEdit->text();
    std::reverse(temp.begin(), temp.end());
    ui->lineEdit->setText(temp);
    ui->statusBar->showMessage("[left] Reversed.");
}

void SecondWindow::on_actionReverse_right_box_triggered()
{
    QString temp = ui->lineEdit_2->text();
    std::reverse(temp.begin(), temp.end());
    ui->lineEdit_2->setText(temp);
    ui->statusBar->showMessage("[right] Reversed.");
}

void SecondWindow::on_actionReverse_All_triggered()
{
    SecondWindow::on_actionReverse_left_box_triggered();
    SecondWindow::on_actionReverse_right_box_triggered();
    ui->statusBar->showMessage("[all] Reversed.");
}

void SecondWindow::on_actionConcat_left_with_right_triggered()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ui->lineEdit_2->text());
    ui->statusBar->showMessage("[left] concated with [right].");
}

void SecondWindow::on_actionConcat_right_with_left_triggered()
{
    ui->lineEdit_2->setText(ui->lineEdit_2->text() + ui->lineEdit->text());
    ui->statusBar->showMessage("[right] concated with [left].");
}

void SecondWindow::on_action_A_About_triggered()
{
    QMessageBox::information(this, "About", "Лабораторная №6\nАвтор: Емельянов Кирилл\nГруппа: ИКПИ-12");
}

void SecondWindow::on_action_Q_Quit_triggered()
{
    close();
}
