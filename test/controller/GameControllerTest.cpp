#include "GameControllerTest.h"

#include <gtest/gtest.h>
#include <iostream>

namespace controller
{

    TEST_F(GameControllerTest, testGame)
    {
        gc->playGame(game);

        EXPECT_EQ(p1, gc->onTurn());
        EXPECT_TRUE(gc->toggleTurn(0, 0));
        EXPECT_EQ(p2, gc->onTurn());
    }

    TEST_F(GameControllerTest, testSetCells)
    {
        gc->playGame(game);

        gc->toggleTurn(0, 0);
        gc->toggleTurn(1, 0);
        gc->toggleTurn(2, 0);
        gc->toggleTurn(3, 0);
        gc->toggleTurn(4, 0);

        gc->toggleTurn(0, 0);
        gc->toggleTurn(0, 1);
        gc->toggleTurn(0, 2);
        gc->toggleTurn(0, 3);
        gc->toggleTurn(0, 4);
        gc->toggleTurn(0, 5);

        std::cout << game->toString() << std::endl;
    }

}
