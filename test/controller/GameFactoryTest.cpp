#include "GameFactoryTest.h"

#include <gtest/gtest.h>
#include <iostream>

#include "ICell.h"
#include "impl/Cell.h"

namespace controller
{

    TEST_F(GameFactoryTest, testInit)
    {
        std::string strraw("");
        std::string strfunc("");

        for (int i = 0; i < field->getWidth(); i++) {
            for (int j = 0; j < field->getHeight(); j++) {
                strraw.append(field->getCell(i, j)->toString());
            }
            strraw.append("\n");
        }

        strfunc = field->toString();

        EXPECT_STREQ(strraw.c_str(), strfunc.c_str());

        std::cout << strraw << endl << strfunc;
    }

}
