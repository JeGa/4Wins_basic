#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "IGame.h"

class GameController
{
    private:
        IGame *game;
    public:
        GameController();
        virtual ~GameController();
        virtual void playGame(Game *game);
        virtual void player1Turn(int x, int y);
        virtual void palyer2Turn(int x, int y);
        virtual void toggleTurn(int x, int y);
        virtual bool isRunning();
        virtual void endGame();
};

#endif // GAMECONTROLLER_H
