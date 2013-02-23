#ifndef IPLAYER_H
#define IPLAYER_H

namespace data
{

    class IPlayer
    {
        public:
            virtual ~IPlayer() {}
            virtual void writeToFile() = 0;
            virtual std::vector<Game> getGames() = 0;
            virtual void win(Game game) = 0;
            virtual void loos(Game game) = 0;
            virtual int getNumberOfGames() = 0;
    };

}

#endif // IPLAYER_H
