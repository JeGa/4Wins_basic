#ifndef CELLTEST_H
#define CELLTEST_H

#include "impl/Cell.h"
#include <gtest/gtest.h>

namespace data
{

    class CellTest : public ::testing::Test
    {
        protected:
            Cell cell;
            Cell cell_default;

            CellTest() : cell(PLAYER1) {}
    };

}

#endif // CELLTEST_H
