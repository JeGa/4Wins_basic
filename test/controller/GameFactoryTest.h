#ifndef GAMEFACTORYTEST_H
#define GAMEFACTORYTEST_H

#include <gtest/gtest.h>
#include "GameFactory.h"

namespace controller
{

    class GameFactoryTest : public testing::Test
    {
        protected:
            GameFactory f;
            IField *field;

            GameFactoryTest()
            {
                field = f.getDefaultField();
            }

            ~GameFactoryTest()
            {
                delete field;
            }
    };

}

#endif // GAMEFACTORYTEST_H
