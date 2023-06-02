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

// chesses
const sf::Vector2f oneone = sf::Vector2f(0, 0);
const sf::Vector2f onetwo = sf::Vector2f(152, 0);
const sf::Vector2f onethree = sf::Vector2f(310, 0);
const sf::Vector2f onefour = sf::Vector2f(460, 0);

const sf::Vector2f onefive = sf::Vector2f(612, 0);

const sf::Vector2f onesix = sf::Vector2f(765, 0);
const sf::Vector2f oneseven = sf::Vector2f(920, 0);
const sf::Vector2f oneeight = sf::Vector2f(1070, 0);
const sf::Vector2f onenine = sf::Vector2f(1212, 0);

const sf::Vector2f twoone = sf::Vector2f(0, 140);
const sf::Vector2f twotwo = sf::Vector2f(152, 140);
const sf::Vector2f twothree = sf::Vector2f(310, 140);
const sf::Vector2f twofour = sf::Vector2f(460, 140);
const sf::Vector2f twofive = sf::Vector2f(612, 140);
const sf::Vector2f twosix = sf::Vector2f(765, 140);
const sf::Vector2f twoseven = sf::Vector2f(920, 140);
const sf::Vector2f twoeight = sf::Vector2f(1070, 140);
const sf::Vector2f twonine = sf::Vector2f(1212, 140);

const sf::Vector2f threeone = sf::Vector2f(0, 290);
const sf::Vector2f threetwo = sf::Vector2f(152, 290);
const sf::Vector2f threethree = sf::Vector2f(310, 290);
const sf::Vector2f threefour = sf::Vector2f(460, 290);
const sf::Vector2f threefive = sf::Vector2f(612, 290);
const sf::Vector2f threesix = sf::Vector2f(765, 290);
const sf::Vector2f threeseven = sf::Vector2f(920, 290);
const sf::Vector2f threeeight = sf::Vector2f(1070, 290);
const sf::Vector2f threenine = sf::Vector2f(1212, 290);

const sf::Vector2f fourone = sf::Vector2f(0, 440);
const sf::Vector2f fourtwo = sf::Vector2f(152, 440);
const sf::Vector2f fourthree = sf::Vector2f(310, 440);
const sf::Vector2f fourfour = sf::Vector2f(460, 440);
const sf::Vector2f fourfive = sf::Vector2f(612, 440);
const sf::Vector2f foursix = sf::Vector2f(765, 440);
const sf::Vector2f fourseven = sf::Vector2f(920, 440);
const sf::Vector2f foureight = sf::Vector2f(1070, 440);
const sf::Vector2f fournine = sf::Vector2f(1212, 440);

const sf::Vector2f fiveone = sf::Vector2f(0, 590);
const sf::Vector2f fivetwo = sf::Vector2f(152, 590);
const sf::Vector2f fivethree = sf::Vector2f(310, 590);
const sf::Vector2f fivefour = sf::Vector2f(460, 590);
const sf::Vector2f fivefive = sf::Vector2f(612, 590);
const sf::Vector2f fivesix = sf::Vector2f(765, 590);
const sf::Vector2f fiveseven = sf::Vector2f(920, 590);
const sf::Vector2f fiveeight = sf::Vector2f(1070, 590);
const sf::Vector2f fivenine = sf::Vector2f(1212, 590);

const sf::Vector2f sixone = sf::Vector2f(0, 740);
const sf::Vector2f sixtwo = sf::Vector2f(152, 740);
const sf::Vector2f sixthree = sf::Vector2f(310, 740);
const sf::Vector2f sixfour = sf::Vector2f(460, 740);
const sf::Vector2f sixfive = sf::Vector2f(612, 740);
const sf::Vector2f sixsix = sf::Vector2f(765, 740);
const sf::Vector2f sixseven = sf::Vector2f(920, 740);
const sf::Vector2f sixeight = sf::Vector2f(1070, 740);
const sf::Vector2f sixnine = sf::Vector2f(1212, 740);

const sf::Vector2f sevenone = sf::Vector2f(0, 890);
const sf::Vector2f seventwo = sf::Vector2f(152, 890);
const sf::Vector2f seventhree = sf::Vector2f(310, 890);
const sf::Vector2f sevenfour = sf::Vector2f(460, 890);
const sf::Vector2f sevenfive = sf::Vector2f(612, 890);
const sf::Vector2f sevensix = sf::Vector2f(765, 890);
const sf::Vector2f sevenseven = sf::Vector2f(920, 890);
const sf::Vector2f seveneight = sf::Vector2f(1070, 890);
const sf::Vector2f sevennine = sf::Vector2f(1212, 890);

const sf::Vector2f eightone = sf::Vector2f(0, 1040);
const sf::Vector2f eighttwo = sf::Vector2f(152, 1040);
const sf::Vector2f eightthree = sf::Vector2f(310, 1040);
const sf::Vector2f eightfour = sf::Vector2f(460, 1040);
const sf::Vector2f eightfive = sf::Vector2f(612, 1040);
const sf::Vector2f eightsix = sf::Vector2f(765, 1040);
const sf::Vector2f eightseven = sf::Vector2f(920, 1040);
const sf::Vector2f eighteight = sf::Vector2f(1070, 1040);
const sf::Vector2f eightnine = sf::Vector2f(1212, 1040);

const sf::Vector2f nineone = sf::Vector2f(0, 1190);
const sf::Vector2f ninetwo = sf::Vector2f(152, 1190);
const sf::Vector2f ninethree = sf::Vector2f(310, 1190);
const sf::Vector2f ninefour = sf::Vector2f(460, 1190);
const sf::Vector2f ninefive = sf::Vector2f(612, 1190);
const sf::Vector2f ninesix = sf::Vector2f(765, 1190);
const sf::Vector2f nineseven = sf::Vector2f(920, 1190);
const sf::Vector2f nineeight = sf::Vector2f(1070, 1190);
const sf::Vector2f ninenine = sf::Vector2f(1212, 1190);

const sf::Vector2f tenone = sf::Vector2f(0, 1328);
const sf::Vector2f tentwo = sf::Vector2f(152, 1328);
const sf::Vector2f tenthree = sf::Vector2f(310, 1328);
const sf::Vector2f tenfour = sf::Vector2f(460, 1328);
const sf::Vector2f tenfive = sf::Vector2f(612, 1328);
const sf::Vector2f tensix = sf::Vector2f(765, 1328);
const sf::Vector2f tenseven = sf::Vector2f(920, 1328);
const sf::Vector2f teneight = sf::Vector2f(1070, 1328);
const sf::Vector2f tennine = sf::Vector2f(1212, 1328);



#endif