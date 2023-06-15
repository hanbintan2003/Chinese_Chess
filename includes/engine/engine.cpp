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
        this->_update_chesses_event(event);

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

    // display buttons
    //this->_buttons.draw_buttons(this->_window);
    this->_chesses.draw_chesses(this->_window);
}


// run method for game
void Engine::run(){
    // set the position and font before running
    sf::Font arial = config.get_font(ARIAL);

    sf::Texture back = config.get_texture("0");
    sf::Sprite sprite(back);

    // main loop
    while (this->_window.isOpen()){
        // taking input
        this->input();

        // clear the screen
        //this->_window.clear(sf::Color(145, 186, 214));

        // draw the updated events
        this->_window.draw(sprite);
        this->display();


        // sfml method to display to the screen
        this->_window.display();
    }

}
// *****************************************************************************************************************

// *****************************************************************************************************************
void Engine::_init(){
    this->play = 0;
    this->name = -1;
    this->_buttons = Buttons();

}
// *****************************************************************************************************************

// update buttons event
void Engine::_update_buttons_event(sf::Event& event)
{
    // to get which button the player clicks
    int action = this->_buttons.update_buttons(this->_window, event);

    if(action == Work)
    {
        cout << "Work" << endl;
        return;
    }
}

void call(int temp){
    if (temp >0 && temp < 37) cout<< "Selected ";
    callName(temp);
}

void Engine::_update_chesses_event(sf::Event &event) {
    int temp = this->_chesses.update_chesses(this->_window, event,play,name);
    //
    if (temp>=-1 && temp <37) {
        name = temp;
        //call(name);
    }
}


