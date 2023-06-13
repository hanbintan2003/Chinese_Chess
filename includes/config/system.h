#ifndef SYSTEM_H
#define SYSTEM_H
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

enum FONTS{
    // ADD MORE FONTS HERE
    ARIAL = 0,
};

// Action code for buttons go here
enum ACTION_CODE{
    INVALID = -99,
    // add more action code for button here
    Work = 666,
};

enum PLAY{
    Red = 0,
    Black = 1,
};

//enum ccc{
//    bc = 0,
//    bj = 1,
//    bm = 2,
//    bp = 3,
//    bs = 4,
//    bx = 5,
//    bz = 6,
//
//    rb= 7,
//    rc = 8,
//    rj = 9,
//    rm = 10,
//    rp = 11,
//    rs = 12,
//    rx = 13,
//};

string callName(int name);

// add more enum here
// windows
// ADD WINDOWS CONFIG VARIABLE HERE
const float WINDOW_HEIGHT = 1446;
const float WINDOW_WIDTH = 1333.5;


// system variable config
// ADD SYSTEM  VARIABLE HERE
const sf::Vector2f INPUT_BOX_SIZE = sf::Vector2f(300, 100);
const sf::Vector2f INPUT_BOX_POS = sf::Vector2f(430, 500);
const sf::Vector2f HEADER_SIZE = sf::Vector2f(300, 50);
const sf::Vector2f HEADER_POS = sf::Vector2f(430, 200);

// chesses
const sf::Vector2f grid[10][9] = {
        { sf::Vector2f(0, 0), sf::Vector2f(152, 0), sf::Vector2f(310, 0), sf::Vector2f(460, 0), sf::Vector2f(612, 0), sf::Vector2f(765, 0), sf::Vector2f(920, 0), sf::Vector2f(1070, 0), sf::Vector2f(1212, 0) },
        { sf::Vector2f(0, 140), sf::Vector2f(152, 140), sf::Vector2f(310, 140), sf::Vector2f(460, 140), sf::Vector2f(612, 140), sf::Vector2f(765, 140), sf::Vector2f(920, 140), sf::Vector2f(1070, 140), sf::Vector2f(1212, 140) },
        { sf::Vector2f(0, 290), sf::Vector2f(152, 290), sf::Vector2f(310, 290), sf::Vector2f(460, 290), sf::Vector2f(612, 290), sf::Vector2f(765, 290), sf::Vector2f(920, 290), sf::Vector2f(1070, 290), sf::Vector2f(1212, 290) },
        { sf::Vector2f(0, 440), sf::Vector2f(152, 440), sf::Vector2f(310, 440), sf::Vector2f(460, 440), sf::Vector2f(612, 440), sf::Vector2f(765, 440), sf::Vector2f(920, 440), sf::Vector2f(1070, 440), sf::Vector2f(1212, 440) },
        { sf::Vector2f(0, 590), sf::Vector2f(152, 590), sf::Vector2f(310, 590), sf::Vector2f(460, 590), sf::Vector2f(612, 590), sf::Vector2f(765, 590), sf::Vector2f(920, 590), sf::Vector2f(1070, 590), sf::Vector2f(1212, 590) },
        { sf::Vector2f(0, 740), sf::Vector2f(152, 740), sf::Vector2f(310, 740), sf::Vector2f(460, 740), sf::Vector2f(612, 740), sf::Vector2f(765, 740), sf::Vector2f(920, 740), sf::Vector2f(1070, 740), sf::Vector2f(1212, 740) },
        { sf::Vector2f(0, 890), sf::Vector2f(152, 890), sf::Vector2f(310, 890), sf::Vector2f(460, 890), sf::Vector2f(612, 890), sf::Vector2f(765, 890), sf::Vector2f(920, 890), sf::Vector2f(1070, 890), sf::Vector2f(1212, 890) },
        { sf::Vector2f(0, 1040), sf::Vector2f(152, 1040), sf::Vector2f(310, 1040), sf::Vector2f(460, 1040), sf::Vector2f(612, 1040), sf::Vector2f(765, 1040), sf::Vector2f(920, 1040), sf::Vector2f(1070, 1040), sf::Vector2f(1212, 1040) },
        { sf::Vector2f(0, 1190), sf::Vector2f(152, 1190), sf::Vector2f(310, 1190), sf::Vector2f(460, 1190), sf::Vector2f(612, 1190), sf::Vector2f(765, 1190), sf::Vector2f(920, 1190), sf::Vector2f(1070, 1190), sf::Vector2f(1212, 1190) },
        { sf::Vector2f(0, 1328), sf::Vector2f(152, 1328), sf::Vector2f(310, 1328), sf::Vector2f(460, 1328), sf::Vector2f(612, 1328), sf::Vector2f(765, 1328), sf::Vector2f(920, 1328), sf::Vector2f(1070, 1328), sf::Vector2f(1212, 1328) }
};


#endif