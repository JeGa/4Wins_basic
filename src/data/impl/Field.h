#ifndef FIELD_H
#define FIELD_H

#include "IField.h"
#include "ICell.h"

namespace data
{

    class Field : public IField
    {
        private:
            int width;
            int height;
            ICell **field;

            void initField(int x, int y);
            bool checkInField(int x, int y);
        public:
            static const int DEFAULT_WIDTH = 5;
            static const int DEFAULT_HEIGHT = 8;

            Field();
            Field(int width, int height);

            virtual ~Field();
            virtual void setCell(int x, int y, Colors c);
            virtual ICell *getCell(int x, int y);
            virtual int getWidth();
            virtual int getHeight();
    };

}

#endif // FIELD_H
