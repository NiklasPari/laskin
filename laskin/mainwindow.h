#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_clicked();

    void on_reset_clicked();

    void on_add_1_clicked();

    void on_add_2_clicked();

    void on_add_3_clicked();

    void on_add_4_clicked();

    void on_add_5_clicked();

    void on_add_6_clicked();

    void on_add_7_clicked();

    void on_add_8_clicked();

    void on_add_9_clicked();

    void on_add_0_clicked();

    void on_add_enter_clicked();

    void on_add_plus_clicked();

    void on_add_minus_clicked();

    void on_add_times_clicked();

    void on_add_divide_clicked();

    void on_num1_cursorPositionChanged(int arg1, int arg2);

    void on_num2_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
