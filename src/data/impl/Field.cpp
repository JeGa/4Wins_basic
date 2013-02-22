#include "Field.h"
#include "ICell.h"

namespace data
{

    Field::Field(ICell **field, int x, int y) : field(field), width(x), height(y)
    {

    }

    Field::~Field()
    {
        for (int i = 0; i < width; i++) {
            delete[] field[i];
        }

        delete[] field;
    }

    bool Field::checkInField(int x, int y)
    {
        if (x >= 0 && x <= width && y >= 0 && y <= height)
            return true;
        return false;
    }

    void Field::setCell(int x, int y, Colors c)
    {
        if (!checkInField(x, y))
            throw "Index not valid.";

        field[x][y].setColor(c);
    }

    ICell *Field::getCell(int x, int y)
    {
        if (!checkInField(x, y))
            throw "Index not valid.";

        return &field[x][y];
    }

    int Field::getWidth()
    {
        return width;
    }

    int Field::getHeight()
    {
        return height;
    }

}
