#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "IGame.h"

namespace controller
{

    class GameController
    {
        private:
            data::IGame *game;
        public:
            GameController();
            virtual ~GameController();
            virtual void playGame(data::IGame *game);
            virtual void player1Turn(int x, int y);
            virtual void player2Turn(int x, int y);
            virtual void toggleTurn(int x, int y);
            virtual bool isRunning();
            virtual void endGame();
    };

}

#endif // GAMECONTROLLER_H
