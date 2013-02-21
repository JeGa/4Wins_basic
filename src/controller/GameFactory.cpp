#include "GameFactory.h"
#include "ICell.h"
#include "impl/Cell.h"
#include "impl/Field.h"

namespace controller
{

    using namespace data;

    const int GameFactory::DEFAULT_WIDTH;
    const int GameFactory::DEFAULT_HEIGHT;

    ICell **GameFactory::initField(int w, int h)
    {
        if (w <= 0 || h <= 0)
            throw "Width and height must be > 0";

        ICell **field;

        field = new ICell*[w];

        for (int i = 0; i < w; i++) {
            field[i] = new Cell[h];
        }

        return field;
    }

    IField *GameFactory::getField(int x, int y)
    {
        return new Field(initField(x, y), x, y);
    }

    IField *GameFactory::getDefaultField()
    {
        return new Field(initField(DEFAULT_WIDTH, DEFAULT_HEIGHT),
                         DEFAULT_WIDTH, DEFAULT_HEIGHT);
    }

}
