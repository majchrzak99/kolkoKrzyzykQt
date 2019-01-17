#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    currentGame = new game;
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_x0y0_clicked()
{
    try{
        currentGame->move(0,0);
        ui->x0y0->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }

}

void MainWindow::on_x1y0_clicked()
{
    try{
        currentGame->move(1,0);
        ui->x1y0->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }

}

void MainWindow::on_x2y0_clicked()
{
    try{
        currentGame->move(2,0);
        ui->x2y0->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x0y1_clicked()
{
    try{
        currentGame->move(0,1);
        ui->x0y1->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x1y1_clicked()
{
    try{
        currentGame->move(1,1);
        ui->x1y1->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x2y1_clicked()
{
    try{
        currentGame->move(2,1);
        ui->x2y1->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x0y2_clicked()
{
    try{
        currentGame->move(0,2);
        ui->x0y2->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x1y2_clicked()
{
    try{
        currentGame->move(1,2);
        ui->x1y2->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}

void MainWindow::on_x2y2_clicked()
{
    try{
        currentGame->move(2,2);
        ui->x2y2->setText(currentGame->getPlayerName());
    }
    catch(QString ex){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setText(ex);
        msg.exec();
    }
}
