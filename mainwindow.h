#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Ex_2_clicked();

    void on_Move_Text_clicked();

    void on_Replace_text_clicked();

    void on_Random_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
