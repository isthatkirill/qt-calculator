#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionAddition_triggered();

    void on_actionSubtraction_triggered();

    void on_actionMultiplication_triggered();

    void on_actionDivision_triggered();

    void on_actionExponentiation_triggered();

    void on_pushButton_2_clicked();

    void on_action_A_About_triggered();

    void on_action_C_Clear_all_triggered();

    void on_action_Q_Exit_triggered();

    void on_action_T_Do_all_operations_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
