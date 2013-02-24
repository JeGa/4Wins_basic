#include "GameTest.h"

#include <gtest/gtest.h>

namespace data
{

    TEST_F(GameTest, testGetPlayer)
    {
        EXPECT_EQ(p1, game->getPlayer1());
        EXPECT_EQ(p2, game->getPlayer2());
    }

    TEST_F(GameTest, testGetSetCell)
    {
        game->setCellStatus(0, 0, p1);
        EXPECT_EQ(p1, game->getCellStatus(0, 0));
    }

    TEST_F(GameTest, testOnTurn)
    {
        EXPECT_EQ(p1, game->onTurn());
    }

}
