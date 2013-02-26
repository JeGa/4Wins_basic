#ifndef TEXTUI_H
#define TEXTUI_H

#include "IPlayer.h"
#include "GameFactory.h"
#include "IGame.h"
#include "GameControllerStrategy.h"
#include <string>

namespace view
{

    using namespace controller;
    using namespace data;
    using namespace std;

    class TextUI
    {
        private:
            controller::GameFactory factory;

            IPlayer *p1;
            IPlayer *p2;
            GameControllerStrategy *gc;
            IGame *game;
        public:
            TextUI();
            ~TextUI();
            bool setInput(int x, int y);
            string toString();
    };

}

#endif // TEXTUI_H
