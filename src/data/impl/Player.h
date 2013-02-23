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
            Player();
            virtual ~Player();
    };

}

#endif // PLAYER_H
