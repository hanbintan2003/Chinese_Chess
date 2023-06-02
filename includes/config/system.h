#ifndef SYSTEM_H
#define SYSTEM_H
#include <SFML/Graphics.hpp>
using namespace std;

enum FONTS{
    // ADD MORE FONTS HERE
    ARIAL = 0,
};

// Action code for buttons go here
enum ACTION_CODE{
    INVALID = -1,
    // add more action code for button here
    TEST = 0,
};

enum PLAY{
    Red = 0,
    Black = 1,
};



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

const sf::Vector2f oneone = sf::Vector2f(430, 200);

#endif