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
    void setupBoard();
    mark getPlayer();
    QString getPlayerName();
    void setPlayer(mark player);
    void move(unsigned short posX, unsigned short posY);
    void changePlayer();
private:
    QVector<QVector<mark>> board;
    mark player;

};

#endif // GAME_H
