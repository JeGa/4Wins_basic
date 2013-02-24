/*
* Up from this class IPlayer is uesd to identify palyers.
* The enum Colors is only used internal.
*/

#ifndef GAME_H
#define GAME_H

#include "IGame.h"
#include "IField.h"
#include <string>

class Game : public IGame
{
    private:
        IPlayer *player1;
        IPlayer *player2;
        IField *field;
        IPlayer *onTurn;
    public:
        Game(IField *field, IPlayer *player1, IPlayer *player2, IPlayer *onTurn);
        virtual ~Game();
        virtual IPlayer *onTurn();

        virtual void setCellStatus(int x, int y, IPlayer *player);
        virtual IPlayer *getCellStatus(int x, int y);

        virtual IPlayer *getPlayer1();
        virtual IPlayer *getPlayer2();
        virtual std::string toString();
};

#endif // GAME_H
