#ifndef CELLTEST_H
#define CELLTEST_H

#include "Cell.h"
#include <gtest/gtest.h>

namespace data
{

    class CellTest : public testing::Test
    {
        protected:
            Cell cell;

            CellTest() : cell(1) {}
            virtual ~CellTest() {}
    };

}

#endif // CELLTEST_H
