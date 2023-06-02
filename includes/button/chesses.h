#ifndef BUTTONS_H
#define BUTTONS_H

#include "../config/config.h"
#include "chess.h"
#include <SFML/Graphics.hpp>

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc( 30,{100, 100});
        bc.setTexture(config.get_texture("bc"));
        this->_chesses.push_back(bc);
    }
public:
    Chesses(){
        this->_chesses = vector<Chess>();
        this->_init_chesses();
    }
    ~Chesses(){}
    int update_chesses(sf::RenderWindow &window, sf::Event& event){
        for(int i = 0; i < this->_chesses.size(); ++i){
            if(this->_chesses[i].isMouseOver(window))
            {
                this->_chesses[i].setBackColor(sf::Color::Yellow);
                continue;
            }
            this->_chesses[i].setBackColor(sf::Color::White);
        }
        for(int i = 0; i < this->_chesses.size(); ++i)
        {
            bool clicked = this->_chesses[i].isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;
            // if(clicked && i == ACTION CODE DEFINED IN SYSTEM) return ACTION CODE DEFINED IN SYSTEM;
            // ex:
            if(clicked && i == TEST) return TEST;
        }
        return INVALID;
    }
    void draw_chesses(sf::RenderWindow &window){
        for(int i = 0; i < this->_chesses.size(); ++i){
            //this->_buttons[i].setFont(config.get_font(ARIAL));
            this->_chesses[i].drawTo(window);
        }
    }
};

#endif // !BUTTONS_H