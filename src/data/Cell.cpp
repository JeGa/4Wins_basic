#include "Cell.h"

namespace data
{

    Cell::Cell(char c)
    {
        color = c;
    }

    Cell::~Cell()
    {

    }

    void Cell::setColor(char c)
    {
        color = c;
    }

    char Cell::getColor()
    {
        return color;
    }

}
