#include "CellTest.h"
#include <gtest/gtest.h>

namespace data
{

    TEST_F(CellTest, testInit)
    {
        EXPECT_EQ(PLAYER1, cell.getColor());
        EXPECT_EQ(NOTSET, cell_default.getColor());
    }

    TEST_F(CellTest, testSetGet)
    {
        cell.setColor(PLAYER2);
        EXPECT_EQ(PLAYER2, cell.getColor());
    }

}
