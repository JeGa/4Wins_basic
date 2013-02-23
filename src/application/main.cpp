#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "impl/Cell.h"
#include "impl/Field.h"
#include "GameFactory.h"
#include "IField.h"
#include "TextUI.h"

using namespace std;

int main()
{
    view::TextUI tui;
    cout << tui.toString();

    return 0;
}

#endif
