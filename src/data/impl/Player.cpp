#include "Player.h"

namespace data
{

    Player::Player(std::string name, std::string pw)
        : name(name), password(pw)
    {

    }

    Player::~Player()
    {

    }

    std::string Player::getName()
    {
        return name;
    }

    /*bool Player::verifypassword(std::string pw)
    {

    }*/

    int Player::getWins()
    {
        return wins;
    }

    int Player::getLooses()
    {
        return looses:
    }

    int Player::getPlayedGames()
    {
        return playedGames;
    }

    double Player::getWinRatio()
    {
        return static_cast<double>wins/playedGames;
    }

    std::string Player::toString()
    {
        std::string str;
        str += "Player: " + name + "\n";
        str += "Wins: " + wins "\n" + "Looses: " + looses + "\n";
        str += "Ratio: " + winRatio + "\n";

        return str;
    }

}
