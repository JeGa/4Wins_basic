#include "FieldTest.h"

#include <gtest/gtest.h>
#include "GameFactory.h"

namespace data
{

    TEST_F(FieldTest, testInit)
    {
        EXPECT_EQ(controller::GameFactory::DEFAULT_WIDTH, field_default->getWidth());
        EXPECT_EQ(controller::GameFactory::DEFAULT_HEIGHT, field_default->getHeight());
        EXPECT_EQ(9, field->getWidth());
        EXPECT_EQ(10, field->getHeight());
    }

    TEST_F(FieldTest, testSetGet)
    {
        field_default->setCellStatus(0, 0, PLAYER1);
        /*EXPECT_EQ(PLAYER1, field->getCell(0, 0)->getColor());

        EXPECT_ANY_THROW(field->setCell(-1, 0, PLAYER1));
        EXPECT_ANY_THROW(field->setCell(0, 100, PLAYER1));*/
    }

}
