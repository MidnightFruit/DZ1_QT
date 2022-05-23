#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qreal a, b, c;
    a = ui->lineEdit->text().toDouble();
    b = ui->lineEdit_2->text().toDouble();
    c = ui->lineEdit_3->text().toDouble();

    if(a == 0)
    {
        QString answer = QString::number(-c / b);
        ui->lineEdit_4->setText(answer);

    }
    else
    {
        qreal D = qPow(b, 2) - 4 * a * c;

        if(D < 0)
        {
            ui->lineEdit_4->setText("Нет корней");
        }
        else if(D == 0)
        {
            QString answer = "X = ";
            answer.push_back(QString::number(-b / (2 * a)));
            ui->lineEdit_4->setText(answer);
        }
        else
        {
            QString answer_1 = "x1 = ";
            answer_1.push_back(QString::number((-b + qSqrt(D)) / (2 * a)));
            QString answer_2 = " x2 = ";
            answer_2.push_back(QString::number((-b - qSqrt(D)) / (2 * a)));
            answer_1.push_back(answer_2);
            ui->lineEdit_4->setText(answer_1);
        }
    }
}


void MainWindow::on_Ex_2_clicked()
{
    qreal A = ui->side_A->text().toDouble();
    qreal B = ui->side_B->text().toDouble();
    qreal Ang = ui->angel->text().toDouble();
    QString answer;
    if(ui->radSelButton->isChecked())
    {
        answer = QString::number(qSqrt(qPow(A, 2) + qPow(B, 2) - 2 * B * A * qCos(Ang)));
    }
    else
    {
        Ang = qDegreesToRadians(Ang);
        answer = QString::number(qSqrt(qPow(A, 2) + qPow(B, 2) - 2 * B * A * qCos(Ang)));
    }
    ui->resulte_2->setText(answer);
}

void MainWindow::on_Move_Text_clicked()
{
    QTextCursor Cursor;
    ui->Text_2->clear();
    ui->Text_1->selectAll();
    ui->Text_1->cut();
    ui->Text_2->paste();
}


void MainWindow::on_Replace_text_clicked()
{
    QTextCursor Cursor;
    ui->Text_1->selectAll();
    ui->Text_1->copy();
    ui->Text_2->paste();
}


void MainWindow::on_Random_clicked()
{
    ui->Text_1->setHtml("<font color='Lime'>Hello</font>");
}

