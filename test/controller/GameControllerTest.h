/*
* Building of a game is made from hand.
* No factory is used therefor.
*/

#ifndef GAMECONTROLLERTEST_H
#define GAMECONTROLLERTEST_H

#include <gtest/gtest.h>
#include "GameControllerStrategy.h"
#include "GameControllerStandard.h"
#include "IPlayer.h"
#include "IGame.h"
#include "impl/Player.h"
#include "impl/Game.h"
#include "GameFactory.h"

namespace controller
{

    class GameControllerTest : public testing::Test
    {
        protected:
            GameControllerStrategy *gc;
            IGame *game;
            IPlayer *p1;
            IPlayer *p2;
            GameFactory f;

            GameControllerTest()
            {
                gc = new GameControllerStandard;
                p1 = new Player("p1", "p1");
                p2 = new Player("p2", "p2");
                game = new Game(f.getDefaultField(), p1, p2, p1);
            }

            ~GameControllerTest()
            {
                delete gc;
                delete p1;
                delete p2;
                delete game;
            }
    };

}

#endif // GAMECONTROLLERTEST_H
