#ifndef CHESSES_H
#define CHESSES_H

#include "../config/config.h"
#include "chess.h"
#include <SFML/Graphics.hpp>

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc1( 60,oneone,config.get_texture("bc"));
        this->_chesses.push_back(bc1);

        Chess bc2( 60,onenine,config.get_texture("bc"));
        this->_chesses.push_back(bc2);

        Chess bm1( 60,onetwo,config.get_texture("bm"));
        this->_chesses.push_back(bm1);

        Chess bm2( 60,oneeight,config.get_texture("bm"));
        this->_chesses.push_back(bm2);

        Chess bx1( 60,onethree,config.get_texture("bx"));
        this->_chesses.push_back(bx1);

        Chess bx2( 60,oneseven,config.get_texture("bx"));
        this->_chesses.push_back(bx2);

        Chess bs1( 60,onefour,config.get_texture("bs"));
        this->_chesses.push_back(bs1);

        Chess bs2( 60,onesix,config.get_texture("bs"));
        this->_chesses.push_back(bs2);

        Chess bj( 60,onefive,config.get_texture("bj"));
        this->_chesses.push_back(bj);

        Chess bp1( 60,threetwo,config.get_texture("bp"));
        this->_chesses.push_back(bp1);

        Chess bp2( 60,threeeight,config.get_texture("bp"));
        this->_chesses.push_back(bp2);

        Chess bz1( 60,fourone,config.get_texture("bz"));
        this->_chesses.push_back(bz1);

        Chess bz2( 60,fourthree,config.get_texture("bz"));
        this->_chesses.push_back(bz2);

        Chess bz3( 60,fourfive,config.get_texture("bz"));
        this->_chesses.push_back(bz3);

        Chess bz4( 60,fourseven,config.get_texture("bz"));
        this->_chesses.push_back(bz4);

        Chess bz5( 60,fournine,config.get_texture("bz"));
        this->_chesses.push_back(bz5);


        Chess rc1( 60,tenone,config.get_texture("rc"));
        this->_chesses.push_back(rc1);

        Chess rc2( 60,tennine,config.get_texture("rc"));
        this->_chesses.push_back(rc2);

        Chess rm1( 60,tentwo,config.get_texture("rm"));
        this->_chesses.push_back(rm1);

        Chess rm2( 60,teneight,config.get_texture("rm"));
        this->_chesses.push_back(rm2);

        Chess rx1( 60,tenthree,config.get_texture("rx"));
        this->_chesses.push_back(rx1);

        Chess rx2( 60,tenseven,config.get_texture("rx"));
        this->_chesses.push_back(rx2);

        Chess rs1( 60,tenfour,config.get_texture("rs"));
        this->_chesses.push_back(rs1);

        Chess rs2( 60,tensix,config.get_texture("rs"));
        this->_chesses.push_back(rs2);

        Chess rj( 60,tenfive,config.get_texture("rj"));
        this->_chesses.push_back(rj);

        Chess rp1( 60,eighttwo,config.get_texture("rp"));
        this->_chesses.push_back(rp1);

        Chess rp2( 60,eighteight,config.get_texture("rp"));
        this->_chesses.push_back(rp2);

        Chess rb1( 60,sevenone,config.get_texture("rb"));
        this->_chesses.push_back(rb1);

        Chess rb2( 60,seventhree,config.get_texture("rb"));
        this->_chesses.push_back(rb2);

        Chess rb3( 60,sevenfive,config.get_texture("rb"));
        this->_chesses.push_back(rb3);

        Chess rb4( 60,sevenseven,config.get_texture("rb"));
        this->_chesses.push_back(rb4);

        Chess rb5( 60,sevennine,config.get_texture("rb"));
        this->_chesses.push_back(rb5);

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

#endif // !CHESSES_H