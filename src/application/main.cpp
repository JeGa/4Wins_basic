//#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "ICell.h"
#include "Cell.h"

using namespace std;

int main()
{
    data::Cell cell(data::PLAYER1);
    cout << static_cast<int>(cell.getColor()) << endl;
    return 0;
}

#endif
