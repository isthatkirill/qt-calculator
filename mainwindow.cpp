#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();

    double result = 0;
    QString op = ui->comboBox->currentText();
    if (op == "+") result = a + b;
    if (op == "–") result = a - b;
    if (op == "×") result = a * b;
    if (op == "÷") result = a / b;
    if (op == "^") result = pow(a, b);

    QTableWidgetItem * operandA = new QTableWidgetItem(QString::number(a));
    operandA->setTextAlignment(Qt::AlignCenter);

    QTableWidgetItem * operandB = new QTableWidgetItem(QString::number(b));
    operandB->setTextAlignment(Qt::AlignCenter);

    QTableWidgetItem * this_operator = new QTableWidgetItem(op);
    this_operator->setTextAlignment(Qt::AlignCenter);

    QTableWidgetItem * rs = new QTableWidgetItem(QString::number(result));
    rs->setTextAlignment(Qt::AlignCenter);

    ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, operandA);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, this_operator);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, operandB);
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, rs);

    ui->statusBar->showMessage("Calculated.");
}

void MainWindow::on_actionAddition_triggered()
{
    ui->comboBox->setCurrentIndex(0);
    MainWindow::on_pushButton_clicked();
}

void MainWindow::on_actionSubtraction_triggered()
{
    ui->comboBox->setCurrentIndex(1);
    MainWindow::on_pushButton_clicked();
}

void MainWindow::on_actionMultiplication_triggered()
{
    ui->comboBox->setCurrentIndex(2);
    MainWindow::on_pushButton_clicked();
}

void MainWindow::on_actionDivision_triggered()
{
    ui->comboBox->setCurrentIndex(3);
    MainWindow::on_pushButton_clicked();
}

void MainWindow::on_actionExponentiation_triggered()
{
    ui->comboBox->setCurrentIndex(4);
    MainWindow::on_pushButton_clicked();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->setRowCount(0);
    ui->statusBar->showMessage("Cleared.");
}

void MainWindow::on_action_A_About_triggered()
{
    QMessageBox::information(this, "About", "Лабораторная №6\nАвтор: Емельянов Кирилл\nГруппа: ИКПИ-12");
}

void MainWindow::on_action_C_Clear_all_triggered()
{
    ui->tableWidget->setRowCount(0);
    ui->statusBar->showMessage("Cleared.");
}

void MainWindow::on_action_Q_Exit_triggered()
{
    close();
}

void MainWindow::on_action_T_Do_all_operations_triggered()
{
    for (int i = 0; i < 5; i++) {
        ui->comboBox->setCurrentIndex(i);
        MainWindow::on_pushButton_clicked();

    }
}
