#include "PlayerTest.h"

#include "impl/Player.h"
#include <gtest/gtest.h>

namespace data
{

    TEST_F(PlayerTest, testGet)
    {
        EXPECT_STREQ("Han Solo", p1.getName().c_str());


        p1.addGameStatistic(Player::WIN);
        EXPECT_EQ(1, p1.getWins());
        EXPECT_EQ(1, p1.getPlayedGames());
        p1.addGameStatistic(Player::LOOSE);
        EXPECT_EQ(1, p1.getLooses());
        EXPECT_EQ(2, p1.getPlayedGames());

        EXPECT_EQ(0.5, p1.getWinRatio());
    }

}
