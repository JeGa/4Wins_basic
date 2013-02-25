#ifndef GAMECONTROLLERSTRATEGY_H
#define GAMECONTROLLERSTRATEGY_H

#include "IGame.h"
#include "IPlayer.h"

namespace controller
{

    class GameControllerStrategy
    {
        private:
            data::IGame *game;
            data::IPlayer *lastWinner;
            bool running;

            void endGame();

            virtual bool checkRow(data::IPlayer *p) = 0;
        public:
            GameControllerStrategy();
            virtual ~GameControllerStrategy();

            void playGame(data::IGame *game);
            bool isRunning();
            data::IPlayer *getTurn(); // From field
            bool toggleTurn(int x, int y);
            data::IPlayer *getLastWinner();
    };

}

#endif // GAMECONTROLLERSTRATEGY_H
