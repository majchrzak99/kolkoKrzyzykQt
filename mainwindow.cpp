#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/icons/icons/tic-tac-toe-icon.png"));
    currentGame = new game;
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayMSG(msgType type){
    if(type == msgType::winner){
        QMessageBox msg;
        msg.setWindowTitle("Winner");
        msg.setWindowIcon(QIcon(":/icons/icons/info.png"));
        msg.setText(currentGame->getWinnerName());
        msg.setIcon(QMessageBox::Information);
        msg.exec();

    }else if(type == msgType::error){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setWindowIcon(QIcon(":/icons/icons/error.png"));
        msg.setIcon(QMessageBox::Warning);
        msg.setText("Something went wrong");
        msg.exec();
    }else if(type == msgType::fullBoard){
        QMessageBox msg;
        msg.setWindowTitle("Error");
        msg.setWindowIcon(QIcon(":/icons/icons/info.png"));
        msg.setIcon(QMessageBox::Warning);
        msg.setText("No move");
        msg.exec();
    }
}

void MainWindow::displayMSG(msgType type, QString msgText){
    if(type == msgType::error){
            QMessageBox msg;
            msg.setWindowTitle("Error");
            msg.setText(msgText);
            msg.setWindowIcon(QIcon(":/icons/icons/error.png"));
            msg.setIcon(QMessageBox::Warning);
            msg.exec();
    }else if(type == msgType::winner){
        displayMSG(type);
    }
}

void MainWindow::clearBoardUi(){
    ui->x0y0->setText("");
    ui->x0y1->setText("");
    ui->x0y2->setText("");
    ui->x1y0->setText("");
    ui->x1y1->setText("");
    ui->x1y2->setText("");
    ui->x2y0->setText("");
    ui->x2y1->setText("");
    ui->x2y2->setText("");
    displayScore();
}

void MainWindow::displayScore(){
    ui->cross_score->display(currentGame->getScore(mark::cross));
    ui->circle_score->display(currentGame->getScore(mark::circle));
}

void MainWindow::clickedButton(QPushButton* button, unsigned short posX, unsigned short posY){
    try{
        currentGame->move(posX,posY);
        // button->setText(currentGame->getPlayerName());
        if(currentGame->getPlayer()==mark::cross){
            button->setStyleSheet("* {background-image: url(:/icons/icons/x.png);width:100%;height:100%;background-repeat:none;background-position:center;}");
        }
        if(currentGame->getPlayer()==mark::circle){
            button->setStyleSheet("* {background-image: url(:/icons/icons/o.png);width:100%;height:100%;background-repeat:none;background-position:center;}");
        }
        if(currentGame->getWinnerName() != "none"){
           displayMSG(msgType::winner);
           clearBoardUi();
           currentGame->nextTurn();
        }else{
            if(currentGame->isFullBoard()){
                displayMSG(msgType::fullBoard);
                clearBoardUi();
                currentGame->nextTurn();
            }
        }
        currentGame->changePlayer();
    }
    catch(QString ex){
        displayMSG(msgType::error, ex);
    }
    displayScore();
}

void MainWindow::on_x0y0_clicked()
{
    clickedButton(ui->x0y0,0,0);
}

void MainWindow::on_x1y0_clicked()
{
    clickedButton(ui->x1y0,1,0);
}

void MainWindow::on_x2y0_clicked()
{
    clickedButton(ui->x2y0,2,0);
}

void MainWindow::on_x0y1_clicked()
{
    clickedButton(ui->x0y1,0,1);
}

void MainWindow::on_x1y1_clicked()
{
    clickedButton(ui->x1y1,1,1);
}

void MainWindow::on_x2y1_clicked()
{
    clickedButton(ui->x2y1,2,1);
}

void MainWindow::on_x0y2_clicked()
{
    clickedButton(ui->x0y2,0,2);
}

void MainWindow::on_x1y2_clicked()
{
    clickedButton(ui->x1y2,1,2);
}

void MainWindow::on_x2y2_clicked()
{
    clickedButton(ui->x2y2,2,2);
}

void MainWindow::on_actionNew_game_triggered()
{
    delete currentGame;
    currentGame = new game;
    clearBoardUi();
}

void MainWindow::on_actionCredits_triggered()
{
    QMessageBox msg;
    msg.setWindowTitle("Credits");
    msg.setText("Created by Marcin Majchrzak");
    msg.exec();
}

void MainWindow::on_actionExit_triggered()
{
    qApp->exit();
}
