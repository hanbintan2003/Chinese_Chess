#ifndef BUTTONS_H
#define BUTTONS_H

#include "button.h"
#include <SFML/Graphics.hpp>

class Buttons{
private:
    vector<Button> _buttons;
    void _init_buttons(){
        Button Replay("  Replay", {110, 50}, 30,
                       sf::Color::White, sf::Color::Red);
        Replay.setFont(config.get_font(ARIAL));

        //different size for different environment
        if(r == 60)Replay.setPosition({615, 600});
        else Replay.setPosition({482, 500});

        this->_buttons.push_back(Replay);

        Button Close("  Close", {110, 50}, 30,
                       sf::Color::White, sf::Color::Red);
        Close.setFont(config.get_font(ARIAL));

        //different size for different environment
        if(r == 60)Close.setPosition({615, 720});
        else Close.setPosition({482, 620});

        this->_buttons.push_back(Close);

    }
public:
    Buttons(){
        this->_buttons = vector<Button>();
        this->_init_buttons();
    }
    ~Buttons()= default;

    int update_buttons(sf::RenderWindow &window, sf::Event& event){
        for(int i = 0; i < this->_buttons.size(); ++i){
            if(this->_buttons[i].isMouseOver(window))
            {
                this->_buttons[i].setBackColor(sf::Color::Yellow);
                continue;
            }
            this->_buttons[i].setBackColor(sf::Color::White);
        }
        for(int i = 0; i < this->_buttons.size(); ++i)
        {
            bool clicked = this->_buttons[i].isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;
            if(clicked && i == 0) return 9;
            if(clicked && i == 1) return 6;
        }
        return 1;
    }
    void draw_buttons(sf::RenderWindow &window){
        for(auto & _button : this->_buttons){
            _button.setFont(config.get_font(ARIAL));
            _button.drawTo(window);
        }
    }
};

#endif // !BUTTONS_H