//#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "TextUI.h"

using namespace std;

int main()
{
    view::TextUI tui;
    cout << tui.toString();

    return 0;
}

#endif
