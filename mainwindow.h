#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include <QMessageBox>

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
    void on_x0y0_clicked();

    void on_x1y0_clicked();

    void on_x2y0_clicked();

    void on_x0y1_clicked();

    void on_x1y1_clicked();

    void on_x2y1_clicked();

    void on_x0y2_clicked();

    void on_x1y2_clicked();

    void on_x2y2_clicked();

private:
    Ui::MainWindow *ui;
    game *currentGame;
};

#endif // MAINWINDOW_H
