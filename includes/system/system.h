#ifndef SYSTEM_H
#define SYSTEM_H
#include "SFML/Graphics.hpp"
#include <iostream>
using namespace std;

enum FONTS{
    ARIAL = 0,
};


//for different platforms
#pragma once
#if defined(_WIN32) || defined(_WIN64)
const float WINDOW_HEIGHT = 1446 * 0.8f;
const float WINDOW_WIDTH = 1333.5 * 0.8f;

const sf::Vector2f grid[9][10] = {
        { sf::Vector2f(0 * 0.8f, 0 * 0.8f), sf::Vector2f(0 * 0.8f, 140 * 0.8f), sf::Vector2f(0 * 0.8f, 290 * 0.8f), sf::Vector2f(0 * 0.8f, 440 * 0.8f), sf::Vector2f(0 * 0.8f, 590 * 0.8f), sf::Vector2f(0 * 0.8f, 740 * 0.8f), sf::Vector2f(0 * 0.8f, 890 * 0.8f), sf::Vector2f(0 * 0.8f, 1040 * 0.8f), sf::Vector2f(0 * 0.8f, 1190 * 0.8f), sf::Vector2f(0 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(152 * 0.8f, 0 * 0.8f), sf::Vector2f(152 * 0.8f, 140 * 0.8f), sf::Vector2f(152 * 0.8f, 290 * 0.8f), sf::Vector2f(152 * 0.8f, 440 * 0.8f), sf::Vector2f(152 * 0.8f, 590 * 0.8f), sf::Vector2f(152 * 0.8f, 740 * 0.8f), sf::Vector2f(152 * 0.8f, 890 * 0.8f), sf::Vector2f(152 * 0.8f, 1040 * 0.8f), sf::Vector2f(152 * 0.8f, 1190 * 0.8f), sf::Vector2f(152 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(310 * 0.8f, 0 * 0.8f), sf::Vector2f(310 * 0.8f, 140 * 0.8f), sf::Vector2f(310 * 0.8f, 290 * 0.8f), sf::Vector2f(310 * 0.8f, 440 * 0.8f), sf::Vector2f(310 * 0.8f, 590 * 0.8f), sf::Vector2f(310 * 0.8f, 740 * 0.8f), sf::Vector2f(310 * 0.8f, 890 * 0.8f), sf::Vector2f(310 * 0.8f, 1040 * 0.8f), sf::Vector2f(310 * 0.8f, 1190 * 0.8f), sf::Vector2f(310 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(460 * 0.8f, 0 * 0.8f), sf::Vector2f(460 * 0.8f, 140 * 0.8f), sf::Vector2f(460 * 0.8f, 290 * 0.8f), sf::Vector2f(460 * 0.8f, 440 * 0.8f), sf::Vector2f(460 * 0.8f, 590 * 0.8f), sf::Vector2f(460 * 0.8f, 740 * 0.8f), sf::Vector2f(460 * 0.8f, 890 * 0.8f), sf::Vector2f(460 * 0.8f, 1040 * 0.8f), sf::Vector2f(460 * 0.8f, 1190 * 0.8f), sf::Vector2f(460 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(612 * 0.8f, 0 * 0.8f), sf::Vector2f(612 * 0.8f, 140 * 0.8f), sf::Vector2f(612 * 0.8f, 290 * 0.8f), sf::Vector2f(612 * 0.8f, 440 * 0.8f), sf::Vector2f(612 * 0.8f, 590 * 0.8f), sf::Vector2f(612 * 0.8f, 740 * 0.8f), sf::Vector2f(612 * 0.8f, 890 * 0.8f), sf::Vector2f(612 * 0.8f, 1040 * 0.8f), sf::Vector2f(612 * 0.8f, 1190 * 0.8f), sf::Vector2f(612 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(765 * 0.8f, 0 * 0.8f), sf::Vector2f(765 * 0.8f, 140 * 0.8f), sf::Vector2f(765 * 0.8f, 290 * 0.8f), sf::Vector2f(765 * 0.8f, 440 * 0.8f), sf::Vector2f(765 * 0.8f, 590 * 0.8f), sf::Vector2f(765 * 0.8f, 740 * 0.8f), sf::Vector2f(765 * 0.8f, 890 * 0.8f), sf::Vector2f(765 * 0.8f, 1040 * 0.8f), sf::Vector2f(765 * 0.8f, 1190 * 0.8f), sf::Vector2f(765 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(920 * 0.8f, 0 * 0.8f), sf::Vector2f(920 * 0.8f, 140 * 0.8f), sf::Vector2f(920 * 0.8f, 290 * 0.8f), sf::Vector2f(920 * 0.8f, 440 * 0.8f), sf::Vector2f(920 * 0.8f, 590 * 0.8f), sf::Vector2f(920 * 0.8f, 740 * 0.8f), sf::Vector2f(920 * 0.8f, 890 * 0.8f), sf::Vector2f(920 * 0.8f, 1040 * 0.8f), sf::Vector2f(920 * 0.8f, 1190 * 0.8f), sf::Vector2f(920 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(1070 * 0.8f, 0 * 0.8f), sf::Vector2f(1070 * 0.8f, 140 * 0.8f), sf::Vector2f(1070 * 0.8f, 290 * 0.8f), sf::Vector2f(1070 * 0.8f, 440 * 0.8f), sf::Vector2f(1070 * 0.8f, 590 * 0.8f), sf::Vector2f(1070 * 0.8f, 740 * 0.8f), sf::Vector2f(1070 * 0.8f, 890 * 0.8f), sf::Vector2f(1070 * 0.8f, 1040 * 0.8f), sf::Vector2f(1070 * 0.8f, 1190 * 0.8f), sf::Vector2f(1070 * 0.8f, 1328 * 0.8f) },
        { sf::Vector2f(1212 * 0.8f, 0 * 0.8f), sf::Vector2f(1212 * 0.8f, 140 * 0.8f), sf::Vector2f(1212 * 0.8f, 290 * 0.8f), sf::Vector2f(1212 * 0.8f, 440 * 0.8f), sf::Vector2f(1212 * 0.8f, 590 * 0.8f), sf::Vector2f(1212 * 0.8f, 740 * 0.8f), sf::Vector2f(1212 * 0.8f, 890 * 0.8f), sf::Vector2f(1212 * 0.8f, 1040 * 0.8f), sf::Vector2f(1212 * 0.8f, 1190 * 0.8f), sf::Vector2f(1212 * 0.8f, 1328 * 0.8f) }
};

const int r = 60 * 0.8f;

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