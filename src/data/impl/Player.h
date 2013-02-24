#ifndef PLAYER_H
#define PLAYER_H

#include "IPlayer.h"
#include <string>
#include <vector>

namespace data
{

    class Player : public IPlayer
    {
        private:
            std::string name;
            std::string password;
            //std::vector<Game> games;

            // Statistics
            int wins;
            int looses;
            int playedGames;
            double winRatio;
        public:
            static const int LOOSE = 0;
            static const int WIN = 1;

            Player(std::string name, std::string pw);
            virtual ~Player();
            virtual std::string getName();
            //virtual bool verifypassword(std::string pw);
            virtual std::string toString();

            // Player with statistics
            void addGameStatistic(int result);
            int getWins();
            int getLooses();
            int getPlayedGames();
            double getWinRatio();
    };

}

#endif // PLAYER_H
