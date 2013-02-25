#include "GameControllerStrategy.h"

#include "IGame.h"
#include "IPlayer.h"

namespace controller
{

    GameControllerStrategy::GameControllerStrategy() : running(true) {}

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
        // Check if valid cell
        int w = game->getWidth();
        int h = game->getHeight();

        // Cell not free
        if (game->getCellStatus(x, y) != NULL)
            return false;

        // Bottom, above other cell
        if (!(y == h-1 || game->getCellStatus(x, y+1) != NULL))
            return false;

        // Set cell
        game->setCellStatus(x, y, game->onTurn());

        // Check if win
        if (checkRow(game->onTurn())) {
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

    data::IPlayer *GameControllerStrategy::getTurn()
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

}
