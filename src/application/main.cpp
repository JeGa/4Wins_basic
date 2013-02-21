#ifdef RELEASE

#include <iostream>
#include "Cell.h"

using namespace std;

int main()
{
    data::Cell cell(1);
    cout << static_cast<int>(cell.getColor()) << endl;
    return 0;
}

#endif
