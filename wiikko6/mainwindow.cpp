#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num = 0;
    connect(ui->count,SIGNAL(clicked(bool)), this,SLOT(handleCount()));
    connect(ui->reset,SIGNAL(clicked(bool)), this,SLOT(handleReset()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCount()
{
    num++;
    ui->lineEdit->setText(QString::number(num));
}

void MainWindow::handleReset()
{
    num = 0;
    ui->lineEdit->setText(QString::number(num));
}

