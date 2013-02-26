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

    TEST_F(GameControllerTest, testAlgorithmCorrect)
    {
        gc->playGame(game);
        // w = 5, h = 8

        // 4 left up
        EXPECT_TRUE(gc->toggleTurn(0, 0)); // 1 p1
        EXPECT_EQ(p2, gc->onTurn());
        EXPECT_TRUE(gc->toggleTurn(1, 0));
        EXPECT_TRUE(gc->toggleTurn(0, 1)); // 2 p1
        EXPECT_TRUE(gc->toggleTurn(2, 0));
        EXPECT_TRUE(gc->toggleTurn(0, 2)); // 3 p1
        EXPECT_TRUE(gc->toggleTurn(3, 0));
        EXPECT_TRUE(gc->toggleTurn(0, 3)); // 4 p1

        EXPECT_FALSE(gc->isRunning());
        EXPECT_EQ(p1, gc->getLastWinner());
    }


    TEST_F(GameControllerTest, testAlgorithmFailure)
    {
        gc->playGame(game);

        EXPECT_TRUE(gc->toggleTurn(0, 0));
        EXPECT_FALSE(gc->toggleTurn(0, 0));

        EXPECT_FALSE(gc->toggleTurn(0, 4));
    }

    TEST_F(GameControllerTest, testSetCells)
    {
        // Only for visual

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
