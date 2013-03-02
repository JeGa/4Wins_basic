#define RELEASE
#ifdef RELEASE

#include <iostream>
#include "TextUI.h"
#include "GraphicalUI.h"

using namespace std;
using namespace controller;
using namespace data;

int main()
{
    view::TextUI tui;
    view::GraphicalUI gui;
    int x, y;

    do {
        cout << tui.toString();

        cout << "Give x and y coordinates to set cell:" << endl;
        cin >> x;
        cin >> y;

    } while(tui.setInput(x, y));

    return 0;
}

#endif
