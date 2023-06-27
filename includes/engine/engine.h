#ifndef ENGINE_H
#define ENGINE_H
#include "SFML/Graphics.hpp"
#include "../config/config.h"
#include "../button/buttons.h"
#include "../chess/chesses.h"

class Engine{
private:
    int play;
    //start with red

    int name;
    //default no chess is selected

    // sfml private members here
    sf::RenderWindow _window;

    // system setup here
    Buttons _buttons;
    Chesses _chesses;
    bool ending;

    // init
    void _init();
    // update
    void _update_buttons_event(sf::Event& event);
    void _update_chesses_event(sf::Event& event);


public:
    // constructors and destructors
    Engine();
    ~Engine();
    // game processing
    void input();
    void run();
    void display();
};
#endif