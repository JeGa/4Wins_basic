#include "TextUI.h"

#include "GameFactory.h"
#include "IGame.h"
#include "GameControllerStrategy.h"
#include <string>
#include <iostream>

namespace view
{

    using namespace controller;
    using namespace data;
    using namespace std;

    TextUI::TextUI() : p1 (factory.getPlayer("Han Solo", "Falcon")), p2(factory.getPlayer("R2D2", "C3PO")),
        gc(factory.getGameController()), game(factory.getGame(10, 5, p1, p2, p1))
    {
        gc->playGame(game);

        cout << "#### START GAME ####" << endl;
        cout << gc->onTurn()->getName() << " is on turn!" << endl;
    }

    TextUI::~TextUI()
    {
        if (gc->isRunning())
            delete game;

        delete gc;

        delete p1;
        delete p2;
    }

    bool TextUI::setInput(int x, int y)
    {
        gc->toggleTurn(x, y);

        if (!gc->isRunning()) {
            cout << "---- Game ends ----" << endl;
            cout << "WINNER IS:" << endl;
            cout << gc->getLastWinner()->toString() << endl;
            return false;
        }

        cout << gc->onTurn()->getName() << " is on turn!" << endl;
        return true;
    }

    std::string TextUI::toString()
    {
        return game->toString();
    }

}
