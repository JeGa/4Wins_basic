#ifndef FIELDTEST_H
#define FIELDTEST_H

#include "IField.h"
#include "GameFactory.h"
#include <gtest/gtest.h>

namespace data
{

    class FieldTest : public testing::Test
    {
        protected:
            IField *field;
            IField *field_default;
            controller::GameFactory f;

            FieldTest()
            {
                field = f.getField(9, 10);
                field_default = f.getDefaultField();
            }

            ~FieldTest()
            {
                delete field;
                delete field_default;
            }
    };

}

#endif // FIELDTEST_H
