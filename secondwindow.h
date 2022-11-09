#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private slots:

    void on_actionClear_left_box_triggered();

    void on_actionClear_right_box_triggered();

    void on_actionFrom_left_box_to_right_triggered();

    void on_actionFrom_right_box_to_left_box_triggered();

    void on_actionSwap_triggered();

    void on_actionClear_All_triggered();

    void on_actionReverse_left_box_triggered();

    void on_actionReverse_right_box_triggered();

    void on_actionReverse_All_triggered();

    void on_actionConcat_left_with_right_triggered();

    void on_actionConcat_right_with_left_triggered();

    void on_action_A_About_triggered();

    void on_action_Q_Quit_triggered();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
