#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->scoreBox1->setScore(11);
    ui->scoreBox2->setScore(22);
    ui->scoreBox3->setScore(33);
    ui->scoreBox4->setScore(44);

    ui->scoreBox1->setColor(QColor(213, 121, 136));
    ui->scoreBox2->setColor(QColor(43, 147, 238));
    ui->scoreBox3->setColor(QColor(234, 202, 81));
    ui->scoreBox4->setColor(QColor(113, 165, 101));
}

MainWindow::~MainWindow()
{
    delete ui;
}
