#ifndef FIELD_H
#define FIELD_H

#include "IField.h"
#include "ICell.h"

namespace data
{

    class Field : public IField
    {
        private:
            ICell **field;
            int width;
            int height;

            bool checkInField(int x, int y);
        public:
            Field(ICell **field, int x, int y);

            virtual ~Field();
            virtual void setCell(int x, int y, Colors c);
            virtual ICell *getCell(int x, int y);
            virtual int getWidth();
            virtual int getHeight();
    };

}

#endif // FIELD_H
