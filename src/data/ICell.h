#ifndef ICELL_H
#define ICELL_H

namespace data
{

    enum Colors {PLAYER1, PLAYER2, NOTSET};

    class ICell
    {
        public:
            virtual void setColor(Colors c) = 0;
            virtual Colors getColor() = 0;
    };

}

#endif // ICELL_H
