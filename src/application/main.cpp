//#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "impl/Cell.h"
#include "impl/Field.h"
#include "GameFactory.h"
#include "IField.h"

using namespace std;

int main()
{
    data::Cell cell(data::PLAYER1);
    cout << static_cast<int>(cell.getColor()) << endl;

    controller::GameFactory f;

    data::IField *field = f.getDefaultField();
    delete field;

    return 0;
}

#endif
