#ifndef GAME_H
#define GAME_H
#include <QVector>
#include <QString>

enum class mark{
    none,
    circle,
    cross,
};

class game
{
public:
    game();
    mark boardValue(unsigned short posX, unsigned short posY);
    void setBoardValue(unsigned short posX, unsigned short posY, mark value);

    mark getPlayer();
    QString getPlayerName();
    void setPlayer(mark player);
    void move(unsigned short posX, unsigned short posY);
    void changePlayer();
    mark checkWin();
    QString getWinnerName();
    void nextTurn();
    unsigned short getScore(mark player);
private:
    void setupBoard();
    QVector<QVector<mark>> board;
    mark player;
    mark startingPlayer;
    unsigned short scoreCross;
    unsigned short scoreCircle;

};

#endif // GAME_H
