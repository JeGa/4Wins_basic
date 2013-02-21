#include "Cell.h"

namespace data
{

    Cell::Cell(Colors c)
    {
        color = c;
    }

    void Cell::setColor(Colors c)
    {
        color = c;
    }

    Colors Cell::getColor()
    {
        return color;
    }

}
