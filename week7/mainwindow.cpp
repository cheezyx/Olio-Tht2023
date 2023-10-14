#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    countdownTimer = new QTimer(this);
    stepsLabel = new QLabel("Select playtime and press start game");
    selectedgameTime = 0;
    connect(countdownTimer,&QTimer::timeout, this, &MainWindow::updateTimer);
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerselectionHandler() {

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() <<"Button name: "<< name;
    if (name == "time1") {
        countdownTimer->stop();
        selectedgameTime = 120;
        ui->p1bar->setValue(100);
        ui->p2bar->setValue(100);
        updateTimer();
     //   countdownTimer->start(1000);

        }
    else if (name == "time2") {
        countdownTimer->stop();
        selectedgameTime = 300;
        ui->p1bar->setValue(100);
        ui->p2bar->setValue(100);
        updateTimer();
      //  countdownTimer->start(1000);
    }
        qDebug()<<"button: "<<name<<Qt::endl;
}

void MainWindow::updateTimer() {
        short progressValue = (selectedgameTime * 100) / selectedgameTime;
        ui->p1bar->setValue(progressValue);
        ui->p2bar->setValue(progressValue);

}


void MainWindow::startandstopHandler() {
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    if (name == "start") {

        countdownTimer->start(1000);

        }
    }
}













    void timerselectionHandler();
void startandstopHandler();
void switchHandler();
