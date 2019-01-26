#include "game.h"

game::game()
{
    player = mark::cross;
    startingPlayer =  mark::cross;
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
    else {
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
            return this->boardValue(0,y);
        }
    }
    for(unsigned short x=0;x<3;x++){
        if(this->boardValue(x,0) == this->boardValue(x,1) && this->boardValue(x,0) == this->boardValue(x,2) ){
            return this->boardValue(x,0);
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

void game::newGame(){
    if(startingPlayer == mark::cross){
        startingPlayer = mark::circle;
        player = mark::circle;
    }else{
        startingPlayer = mark::cross;
        player = mark::cross;
    }
    this->setupBoard();
}
