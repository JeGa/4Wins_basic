4Wins_basic
===========

## Introduction
4Wins_basic is a very basic 4 wins program written in C++.

Following tools are used:
* Unittests: **Google C++ Testing Framework**
* GUI: **FLTK** (portability and leightweight)
* IDE: **Code::Blocks**.
* 
It is developed under Debian Linux. As architecture the MVC-structure is used.

## Note
This repository only contains the 2-player-local TUI version. GUI and network support
are not implemented. The further development is done in a different development environment
on a different repository.

## Development

### Architecture details
All classes use interfaces, to ensure that all parts are easy to modify and change (use different implementations).
The **GameFactory** is the only class, which useses concrete classes (to construct the objects). It is easy to override the
functions to choose different implementations. Only the factory has to be changed.
For the 4wins algorithm (which is very easy) the **strategy pattern** is used, to implement easy new and better algorithms.

### TUI

    Player: Han Solo
    Wins: 0
    Looses: 0
    Ratio: 0
    Player: R2D2
    Wins: 0
    Looses: 0
    Ratio: 0
    OnTurn: Han Solo
    ----------
    ----------
    ----XOX---
    ---XOOO---
    --XXOXO---
    Give x and y coordinates to set cell:
    5 3

### 4wins algorithm
```c
int GameControllerStandard::countCells(int x, int y, data::IPlayer *p, int xDirection, int yDirection)
{
    int sum = 0;

    while (inField(x, y) && (getGame()->getCellStatus(x, y) == p)) {
        sum++;

        x += xDirection;
        y += yDirection;
    }

    return sum;
}
```

## TODO

* Component based structure for:
  * GameController (each data class is a component)
* Better 4wins algorithm (to give a win-chance): Holding all possible rows in lists.
* GUI
* Network

## Installation

At the moment, there are no binaries available. To compile it, you have to link it with fltk.
To run the unittest you need the gtest framework. All tools used are cross-platform, so it should work under
Windows, too (but not tested yet, maybe you need to set some flags e.g. remove pthread support).
