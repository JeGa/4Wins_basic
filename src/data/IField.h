#ifndef IFIELD_H
#define IFIELD_H

#include "ICell.h"

namespace data
{

    class IField
    {
        public:
            virtual void setCell(int x, int y, Colors c) = 0;
            virtual ICell *getCell(int x, int y) = 0;
            virtual int getWidth() = 0;
            virtual int getHeight() = 0;
    };

}

#endif // IFIELD_H
