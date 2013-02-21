#ifndef CELL_H
#define CELL_H

#include "ICell.h"

namespace data
{

    class Cell : public ICell
    {
        private:
            Colors color;
        public:
            Cell(Colors c);
            Cell();
            virtual void setColor(Colors c);
            virtual Colors getColor();
    };

}

#endif // CELL_H
