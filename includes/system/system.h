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





string callName(int name);



// windows
// ADD WINDOWS CONFIG VARIABLE HERE
const float WINDOW_HEIGHT = 723;
const float WINDOW_WIDTH = 666.75;

// chesses
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

// system variable config
// ADD SYSTEM  VARIABLE HERE
//const sf::Vector2f INPUT_BOX_SIZE = sf::Vector2f(300, 100);
//const sf::Vector2f INPUT_BOX_POS = sf::Vector2f(430, 500);
//const sf::Vector2f HEADER_SIZE = sf::Vector2f(300, 50);
//const sf::Vector2f HEADER_POS = sf::Vector2f(430, 200);
#endif