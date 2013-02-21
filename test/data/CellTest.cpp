#include "CellTest.h"
#include <gtest/gtest.h>

namespace data
{

    TEST_F(CellTest, testInit)
    {
        EXPECT_EQ(1, cell.getColor());
    }

    TEST_F(CellTest, testSetGet)
    {
        cell.setColor(2);
        EXPECT_EQ(2, cell.getColor());
    }

}
