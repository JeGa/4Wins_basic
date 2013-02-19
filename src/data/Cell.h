#ifndef CELL_H
#define CELL_H

namespace data
{

    class Cell
    {
        private:
            char color;
        public:
            Cell(char c);
            virtual ~Cell();
            void setColor(char c);
            char getColor();
    };

}

#endif // CELL_H
