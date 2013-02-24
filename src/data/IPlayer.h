#ifndef IPLAYER_H
#define IPLAYER_H

#include "IGame.h"
#include <vector>
#include <string>

namespace data
{

    class IPlayer
    {
        public:
            virtual ~IPlayer() {}
            //virtual void writeToFile() = 0;
            //virtual std::vector<IGame> getGames() = 0;
            //virtual void win(Game game) = 0;
            //virtual void loose(Game game) = 0;
            //virtual int getNumberOfGames() = 0;
            virtual std::string getName() = 0;
            //virtual bool verifypassword(std::string pw) = 0;
            virtual std::string toString() = 0;
    };

}

#endif // IPLAYER_H
