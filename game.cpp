#include "game.h"

game::game()
{
    player = mark::cross;
    startingPlayer =  mark::none;
    scoreCross = 0;
    scoreCircle = 0;
    setupBoard();
}

mark game::boardValue(unsigned short posX, unsigned short posY){
    return board[posY][posX];
}

void game::setBoardValue(unsigned short posX, unsigned short posY, mark value){
    board[posY][posX] = value;
}

mark game::getPlayer(){
    return player;
}

void game::setPlayer(mark move){
    player = move;
}
void game::setupBoard(){
        for(unsigned short y=0;y<3;y++){
            if(board.size()<3){
                QVector<mark> temp(3);
                board.push_back(temp);
            }
            for(unsigned short x=0;x<3;x++){
                setBoardValue(x,y,mark::none);
            }
        }

}
void game::move(unsigned short posX, unsigned short posY){
    if(this->boardValue(posX,posY) == mark::none){
        setBoardValue(posX,posY,this->getPlayer());
    }
    else {
        QString ex = "Can't move, position isn't empty";
        throw ex;
    }
}

void game::changePlayer(){
    if(this->getPlayer() == mark::cross){
        setPlayer(mark::circle);
    }
    else if(this->getPlayer() == mark::circle){
        setPlayer(mark::cross);
    }
}
QString game::getPlayerName(){
    if(this->getPlayer() == mark::cross){
        return "X";
    }
    else if (this->getPlayer() == mark::circle){
        return "O";
    }
    else {
        return " ";
    }
}

mark game::checkWin(){
    for(unsigned short y=0;y<3;y++){
        if(this->boardValue(0,y) == this->boardValue(1,y) && this->boardValue(0,y) == this->boardValue(2,y) ){
            if(this->boardValue(0,y) != mark::none) {
                return this->boardValue(0,y);
            }
        }
    }
    for(unsigned short x=0;x<3;x++){
        if(this->boardValue(x,0) == this->boardValue(x,1) && this->boardValue(x,0) == this->boardValue(x,2) ){
            if(this->boardValue(x,0) != mark::none) {
                return this->boardValue(x,0);
            }
        }
    }
    if(this->boardValue(2,0) == this->boardValue(1,1) && this->boardValue(2,0) == this->boardValue(0,2)){
        return this->boardValue(2,0);
    }
    if(this->boardValue(0,0) == this->boardValue(1,1) && this->boardValue(0,0) == this->boardValue(2,2)){
        return this->boardValue(0,0);
    }
    return mark::none;
}

QString game::getWinnerName(){
    mark winner = checkWin();
    if(winner == mark::cross){
        return "Cross won";
    }
    if(winner == mark::circle){
        return "Circle won";
    }
    return "none";
}

void game::nextTurn(){
    if(checkWin()==mark::cross){
        scoreCross++;
    }
    if(checkWin()== mark::circle){
        scoreCircle++;
    }
    this->setupBoard();
}

unsigned short game::getScore(mark player){
    if(player == mark::cross){
        return scoreCross;
    }else if (player == mark::circle){
        return scoreCircle;
    }
    return 0;
}

bool game::isFullBoard(){
    for(unsigned short y=0;y<3;y++){
        for(unsigned short x=0;x<3;x++){
            if(this->boardValue(x,y) == mark::none){
                return false;
            }
        }
    }
    return true;
}
