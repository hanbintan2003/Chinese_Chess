#include "engine.h"

// Engine main
Engine::Engine(){
    //Change the name of the project here
    this->_window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Chinese Chess");
    this->_window.setKeyRepeatEnabled(true);
    // ADD MORE IN CTOR
    this->_init();
}

// RELEASE MEMORY IN DESTRUCTOR IF USED NEW
Engine::~Engine(){}

// taking input
void Engine::input(){
    sf::Event event{};
    while (this->_window.pollEvent(event)){
        // calling update event helper functions
        this->_update_buttons_event(event);

        // User quit
        if(event.type == sf::Event::Closed){
            cout << "User Quit" << endl;
            this->_window.close();
            break;
        }
    }
}

// main draw method, update screen
void Engine::display(){
    // ADD MORE THINGS TO DRAW
    this->_header.drawTo(this->_window);
    // display buttons
    this->_buttons.draw_buttons(this->_window);
}


// run method for game
void Engine::run(){
    // set the position and font before running
    sf::Font arial = config.get_font(ARIAL);

    sf::Texture back = config.get_texture("0");
    sf::Sprite sprite(back);

    const sf::Texture *bcc = &config.get_texture("bc");
    const sf::Texture *bmm = &config.get_texture("bm");

    sf::CircleShape bc,bbc;
    bc.setRadius(63);
    bbc.setRadius(63);
    //bc.setFillColor(sf::Color(215, 186, 140));
    bc.setTexture(bcc);
    bbc.setFillColor(sf::Color(215, 186, 140));
    bc.setPosition({0, 0});
    bbc.setPosition({0, 0});

    sf::CircleShape bm,bbm;
    bm.setRadius(63);
    bbm.setRadius(63);
    //bc.setFillColor(sf::Color(215, 186, 140));
    bm.setTexture(bmm);
    bbm.setFillColor(sf::Color(215, 186, 140));
    bm.setPosition({150, 0});
    bbm.setPosition({150, 0});



    // main loop
    while (this->_window.isOpen()){
        // taking input
        this->input();

        // clear the screen
        //this->_window.clear(sf::Color(145, 186, 214));



        // draw the updated events
        this->_window.draw(sprite);
        this->_window.draw(bbc);
        this->_window.draw(bc);

        this->_window.draw(bbm);
        this->_window.draw(bm);
        //this->display();


        // sfml method to display to the screen
        this->_window.display();
    }

}
// *****************************************************************************************************************

// *****************************************************************************************************************
void Engine::_init(){

    this->_buttons = Buttons();

}
// *****************************************************************************************************************

// update buttons event
void Engine::_update_buttons_event(sf::Event& event)
{
    // to get which button the player clicks
    int action = this->_buttons.update_buttons(this->_window, event);

    // template for action code
    // if(action == ACTION CODE DEFINED IN SYSTEM)
    // {

    // }

    // ex:
    if(action == TEST)
    {
        cout << "TEST" << endl;
        return;
    }
}