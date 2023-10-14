#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QLabel>
#include <QDebug>


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
    void switch_clicked();
    void switch2_clicked();
    void stop_clicked();
    void start_clicked();
    void time1_clicked();
    void time2_clicked();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short selectedgameTime;

    void startTimer(short gameTime);
    void updateTimer();
    QTimer *countdownTimer;
    QLabel *stepsLabel;

    void timerselectionHandler();
    void startandstopHandler();
    void switchHandler();
};
#endif // MAINWINDOW_H
