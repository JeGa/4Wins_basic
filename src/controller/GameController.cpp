#include "GameController.h"

#include "IGame.h"

namespace controller
{

    GameController::GameController()
    {

    }

    GameController::~GameController()
    {

    }

    void GameController::playGame(data::IGame *game)
    {
        this->game = game;
    }

    void GameController::player1Turn(int x, int y)
    {

    }

    void GameController::player2Turn(int x, int y)
    {

    }

    void GameController::toggleTurn(int x, int y)
    {

    }

    bool GameController::isRunning()
    {

    }

    void GameController::endGame()
    {

    }

}
