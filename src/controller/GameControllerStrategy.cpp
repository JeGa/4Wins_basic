#include "GameControllerStrategy.h"

#include "IGame.h"
#include "IPlayer.h"

#include <iostream>

namespace controller
{

    GameControllerStrategy::GameControllerStrategy() : running(true), lastWinner(NULL) {}

    GameControllerStrategy::~GameControllerStrategy() {}

    void GameControllerStrategy::endGame()
    {
        delete game;
    }

    void GameControllerStrategy::playGame(data::IGame *game)
    {
        this->game = game;
    }

    bool GameControllerStrategy::toggleTurn(int x, int y)
    {
        convertCoords(&y);

        // Check if valid cell
        int h = game->getHeight();

        // Cell not free
        if (game->getCellStatus(x, y) != NULL)
            return false;

        // Bottom
        if (y != h-1) {
            // Has to be over a set cell
            if (game->getCellStatus(x, y+1) == NULL)
                return false;
        }

        // Set cell
        game->setCellStatus(x, y, game->onTurn());

        // Check if win
        if (checkRow(x, y, game->notOnTurn())) {
            if (game->onTurn() == game->getPlayer1()) {
                // P1 Wins
                game->getPlayer1()->addGameStatistic(data::IPlayer::WIN);
                game->getPlayer2()->addGameStatistic(data::IPlayer::LOOSE);
                lastWinner = game->getPlayer1();
            } else {
                // P2 Wins
                game->getPlayer2()->addGameStatistic(data::IPlayer::WIN);
                game->getPlayer1()->addGameStatistic(data::IPlayer::LOOSE);
                lastWinner = game->getPlayer2();
            }
            endGame();
            running = false;
        }
        return true;
    }

    data::IPlayer *GameControllerStrategy::onTurn()
    {
        return game->onTurn();
    }

    bool GameControllerStrategy::isRunning()
    {
        return running;
    }

    data::IPlayer *GameControllerStrategy::getLastWinner()
    {
        return lastWinner;
    }

    data::IGame *GameControllerStrategy::getGame()
    {
        return game;
    }

    void GameControllerStrategy::convertCoords(int *y)
    {
        *y = game->getHeight() -1 - *y;
    }

}
