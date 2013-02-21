#include "Field.h"
#include "Cell.h"
#include "ICell.h"

#include <iostream>

namespace data
{

    const int Field::DEFAULT_WIDTH;
    const int Field::DEFAULT_HEIGHT;

    Field::Field() : width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT)
    {
        initField(Field::DEFAULT_WIDTH, Field::DEFAULT_HEIGHT);
    }

    Field::Field(int width, int height) : width(width), height(height)
    {
        initField(width, height);
    }

    Field::~Field()
    {
        for (int i = 0; i < width; i++) {
            delete[] field[i];
        }

        delete[] field;
    }

    void Field::initField(int w, int h)
    {
        if (w <= 0 || h <= 0)
            throw "Width and height must be > 0";

        field = new ICell*[w];

        for (int i = 0; i < w; i++) {
            field[i] = new Cell[h];
        }
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
