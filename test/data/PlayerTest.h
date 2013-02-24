#ifndef PLAYERTEST_H
#define PLAYERTEST_H

#include "impl/Player.h"
#include <gtest/gtest.h>

namespace data
{

    class PlayerTest : public testing::Test
    {
        protected:
            Player p1;

            PlayerTest() : p1("Han Solo", "Falcon") {}
            ~PlayerTest() {}
    };

}

#endif // PLAYERTEST_H
