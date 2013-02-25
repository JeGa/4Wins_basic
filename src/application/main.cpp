//#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "TextUI.h"
#include "IPlayer.h"
#include "impl/Player.h"
#include "impl/Game.h"
#include "GameControllerStandard.h"
#include "GameFactory.h"

using namespace std;
using namespace controller;
using namespace data;

int main()
{
    view::TextUI tui;
    cout << tui.toString();

    IPlayer *p1, *p2;
    p1 = new Player("p1", "p1");
    p2 = new Player("p2", "p2");

    GameControllerStandard gc;
    GameFactory f;
    Game g(f.getDefaultField(), p1, p2, p1);

    return 0;
}

#endif
