#ifndef SYSTEM_H
#define SYSTEM_H
#include "SFML/Graphics.hpp"
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


#pragma once

#if defined(_WIN32) || defined(_WIN64)
const float WINDOW_HEIGHT = 723;
const float WINDOW_WIDTH = 666.75;

const sf::Vector2f grid[9][10] = {
        { sf::Vector2f(0, 0), sf::Vector2f(0, 70), sf::Vector2f(0, 145), sf::Vector2f(0, 220), sf::Vector2f(0, 295), sf::Vector2f(0, 370), sf::Vector2f(0, 445), sf::Vector2f(0, 520), sf::Vector2f(0, 595), sf::Vector2f(0, 664) },
        { sf::Vector2f(76, 0), sf::Vector2f(76, 70), sf::Vector2f(76, 145), sf::Vector2f(76, 220), sf::Vector2f(76, 295), sf::Vector2f(76, 370), sf::Vector2f(76, 445), sf::Vector2f(76, 520), sf::Vector2f(76, 595), sf::Vector2f(76, 664) },
        { sf::Vector2f(155, 0), sf::Vector2f(155, 70), sf::Vector2f(155, 145), sf::Vector2f(155, 220), sf::Vector2f(155, 295), sf::Vector2f(155, 370), sf::Vector2f(155, 445), sf::Vector2f(155, 520), sf::Vector2f(155, 595), sf::Vector2f(155, 664) },
        { sf::Vector2f(230, 0), sf::Vector2f(230, 70), sf::Vector2f(230, 145), sf::Vector2f(230, 220), sf::Vector2f(230, 295), sf::Vector2f(230, 370), sf::Vector2f(230, 445), sf::Vector2f(230, 520), sf::Vector2f(230, 595), sf::Vector2f(230, 664) },
        { sf::Vector2f(306, 0), sf::Vector2f(306, 70), sf::Vector2f(306, 145), sf::Vector2f(306, 220), sf::Vector2f(306, 295), sf::Vector2f(306, 370), sf::Vector2f(306, 445), sf::Vector2f(306, 520), sf::Vector2f(306, 595), sf::Vector2f(306, 664) },
        { sf::Vector2f(382.5, 0), sf::Vector2f(382.5, 70), sf::Vector2f(382.5, 145), sf::Vector2f(382.5, 220), sf::Vector2f(382.5, 295), sf::Vector2f(382.5, 370), sf::Vector2f(382.5, 445), sf::Vector2f(382.5, 520), sf::Vector2f(382.5, 595), sf::Vector2f(382.5, 664) },
        { sf::Vector2f(460, 0), sf::Vector2f(460, 70), sf::Vector2f(460, 145), sf::Vector2f(460, 220), sf::Vector2f(460, 295), sf::Vector2f(460, 370), sf::Vector2f(460, 445), sf::Vector2f(460, 520), sf::Vector2f(460, 595), sf::Vector2f(460, 664) },
        { sf::Vector2f(535, 0), sf::Vector2f(535, 70), sf::Vector2f(535, 145), sf::Vector2f(535, 220), sf::Vector2f(535, 295), sf::Vector2f(535, 370), sf::Vector2f(535, 445), sf::Vector2f(535, 520), sf::Vector2f(535, 595), sf::Vector2f(535, 664) },
        { sf::Vector2f(606, 0), sf::Vector2f(606, 70), sf::Vector2f(606, 145), sf::Vector2f(606, 220), sf::Vector2f(606, 295), sf::Vector2f(606, 370), sf::Vector2f(606, 445), sf::Vector2f(606, 520), sf::Vector2f(606, 595), sf::Vector2f(606, 664) }
};

const int r = 30;

#else
const float WINDOW_HEIGHT = 1446;
const float WINDOW_WIDTH = 1333.5;

const sf::Vector2f grid[9][10] = {
        { sf::Vector2f(0, 0), sf::Vector2f(0, 140), sf::Vector2f(0, 290), sf::Vector2f(0, 440), sf::Vector2f(0, 590), sf::Vector2f(0, 740), sf::Vector2f(0, 890), sf::Vector2f(0, 1040), sf::Vector2f(0, 1190), sf::Vector2f(0, 1328) },
        { sf::Vector2f(152, 0), sf::Vector2f(152, 140), sf::Vector2f(152, 290), sf::Vector2f(152, 440), sf::Vector2f(152, 590), sf::Vector2f(152, 740), sf::Vector2f(152, 890), sf::Vector2f(152, 1040), sf::Vector2f(152, 1190), sf::Vector2f(152, 1328) },
        { sf::Vector2f(310, 0), sf::Vector2f(310, 140), sf::Vector2f(310, 290), sf::Vector2f(310, 440), sf::Vector2f(310, 590), sf::Vector2f(310, 740), sf::Vector2f(310, 890), sf::Vector2f(310, 1040), sf::Vector2f(310, 1190), sf::Vector2f(310, 1328) },
        { sf::Vector2f(460, 0), sf::Vector2f(460, 140), sf::Vector2f(460, 290), sf::Vector2f(460, 440), sf::Vector2f(460, 590), sf::Vector2f(460, 740), sf::Vector2f(460, 890), sf::Vector2f(460, 1040), sf::Vector2f(460, 1190), sf::Vector2f(460, 1328) },
        { sf::Vector2f(612, 0), sf::Vector2f(612, 140), sf::Vector2f(612, 290), sf::Vector2f(612, 440), sf::Vector2f(612, 590), sf::Vector2f(612, 740), sf::Vector2f(612, 890), sf::Vector2f(612, 1040), sf::Vector2f(612, 1190), sf::Vector2f(612, 1328) },
        { sf::Vector2f(765, 0), sf::Vector2f(765, 140), sf::Vector2f(765, 290), sf::Vector2f(765, 440), sf::Vector2f(765, 590), sf::Vector2f(765, 740), sf::Vector2f(765, 890), sf::Vector2f(765, 1040), sf::Vector2f(765, 1190), sf::Vector2f(765, 1328) },
        { sf::Vector2f(920, 0), sf::Vector2f(920, 140), sf::Vector2f(920, 290), sf::Vector2f(920, 440), sf::Vector2f(920, 590), sf::Vector2f(920, 740), sf::Vector2f(920, 890), sf::Vector2f(920, 1040), sf::Vector2f(920, 1190), sf::Vector2f(920, 1328) },
        { sf::Vector2f(1070, 0), sf::Vector2f(1070, 140), sf::Vector2f(1070, 290), sf::Vector2f(1070, 440), sf::Vector2f(1070, 590), sf::Vector2f(1070, 740), sf::Vector2f(1070, 890), sf::Vector2f(1070, 1040), sf::Vector2f(1070, 1190), sf::Vector2f(1070, 1328) },
        { sf::Vector2f(1212, 0), sf::Vector2f(1212, 140), sf::Vector2f(1212, 290), sf::Vector2f(1212, 440), sf::Vector2f(1212, 590), sf::Vector2f(1212, 740), sf::Vector2f(1212, 890), sf::Vector2f(1212, 1040), sf::Vector2f(1212, 1190), sf::Vector2f(1212, 1328) }
};

const int r = 60;

#endif


string callName(int name);

#endif