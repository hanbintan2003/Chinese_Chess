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
    this->_chesses.draw_chesses(this->_window);
    if(ending)this->_buttons.draw_buttons(this->_window);
}

// *****************************************************************************************************************

// run method for game
void Engine::run(){
    // set the position and font before running

    sf::Texture back = config.get_texture("0");
    sf::Sprite sprite(back);

    // main loop
    while (this->_window.isOpen()){
        // taking input
        this->input();

        // draw the updated events
        this->_window.draw(sprite);
        this->display();

        // sfml method to display to the screen
        this->_window.display();
    }

}

// *****************************************************************************************************************
void Engine::_init(){
    this->play = 0;
    this->name = -1;
    this->ending = false;
}
// *****************************************************************************************************************

// update buttons event
void Engine::_update_buttons_event(sf::Event& event){
    end = this->_buttons.update_buttons(this->_window, event);

    if(end == 9 &&ending){
        cout<<end;
        this->_chesses.replay();
        this->ending = false;
    }
    else if (end == 6 &&ending){
        this->_window.close();
    }
}


void Engine::_update_chesses_event(sf::Event &event) {
    if (!ending){
        int temp = this->_chesses.update_chesses(this->_window, event,play,name);
        if (temp>=-1 && temp <37) {
            name = temp;
        }
        if (this->_chesses.over()) {
            this->play = 0;
            this->name = -1;
            this->ending = true;
        }
    }
}