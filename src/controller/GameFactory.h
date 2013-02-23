#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "ICell.h"
#include "IField.h"

namespace controller
{

    using namespace data;

    class GameFactory
    {
        private:
            ICell ***initField(int x, int y);

        public:
            static const int DEFAULT_WIDTH = 5;
            static const int DEFAULT_HEIGHT = 8;

            virtual IField *getField(int x, int y);
            virtual IField *getDefaultField();
    };

}

#endif // GAMEFACTORY_H
