#ifndef FIELDTEST_H
#define FIELDTEST_H

#include "impl/Field.h"
#include <gtest/gtest.h>

namespace data
{

    class FieldTest : public ::testing::Test
    {
        protected:
            Field field;
            Field field_default;

            FieldTest() : field(9, 10) {}
    };

}

#endif // FIELDTEST_H
