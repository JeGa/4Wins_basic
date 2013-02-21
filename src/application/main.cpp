//#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "impl/Cell.h"
#include "impl/Field.h"

using namespace std;

int main()
{
    data::Cell cell(data::PLAYER1);
    cout << static_cast<int>(cell.getColor()) << endl;

    data::Field field();
    cout << data::Field::DEFAULT_HEIGHT << endl;

    return 0;
}

#endif
