#ifndef GAMECONTROLLERSTANDARD_H
#define GAMECONTROLLERSTANDARD_H

#include "GameControllerStandard.h"
#include "GameControllerStrategy.h"

namespace controller
{

    class GameControllerStandard : public GameControllerStrategy
    {
        private:
            virtual bool checkRow(data::IPlayer *p);
        public:
            GameControllerStandard() {}
            virtual ~GameControllerStandard() {}
    };

}

#endif // GAMECONTROLLERSTANDARD_H
