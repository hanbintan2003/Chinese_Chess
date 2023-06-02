#ifndef CHESSES_H
#define CHESSES_H

#include "../config/config.h"
#include "chess.h"
#include <SFML/Graphics.hpp>

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc1( "car",60,grid[0][0],config.get_texture("bc"));
        this->_chesses.push_back(bc1);

        Chess bc2( "car",60,grid[0][8],config.get_texture("bc"));
        this->_chesses.push_back(bc2);

        Chess bm1("horse", 60,grid[0][1],config.get_texture("bm"));
        this->_chesses.push_back(bm1);

        Chess bm2("horse", 60,grid[0][7],config.get_texture("bm"));
        this->_chesses.push_back(bm2);

        Chess bx1("minister", 60,grid[0][2],config.get_texture("bx"));
        this->_chesses.push_back(bx1);

        Chess bx2("minister", 60,grid[0][6],config.get_texture("bx"));
        this->_chesses.push_back(bx2);

        Chess bs1("scholar", 60,grid[0][3],config.get_texture("bs"));
        this->_chesses.push_back(bs1);

        Chess bs2("scholar", 60,grid[0][5],config.get_texture("bs"));
        this->_chesses.push_back(bs2);

        Chess bj("king", 60,grid[0][4],config.get_texture("bj"));
        this->_chesses.push_back(bj);

        Chess bp1("boom", 60,grid[2][1],config.get_texture("bp"));
        this->_chesses.push_back(bp1);

        Chess bp2("boom", 60,grid[2][7],config.get_texture("bp"));
        this->_chesses.push_back(bp2);

        Chess bz1("solider", 60,grid[3][0],config.get_texture("bz"));
        this->_chesses.push_back(bz1);

        Chess bz2("solider", 60,grid[3][2],config.get_texture("bz"));
        this->_chesses.push_back(bz2);

        Chess bz3("solider", 60,grid[3][4],config.get_texture("bz"));
        this->_chesses.push_back(bz3);

        Chess bz4("solider", 60,grid[3][6],config.get_texture("bz"));
        this->_chesses.push_back(bz4);

        Chess bz5("solider", 60,grid[3][8],config.get_texture("bz"));
        this->_chesses.push_back(bz5);


        Chess rc1("car", 60,grid[9][0],config.get_texture("rc"));
        this->_chesses.push_back(rc1);

        Chess rc2("car", 60,grid[9][8],config.get_texture("rc"));
        this->_chesses.push_back(rc2);

        Chess rm1("horse", 60,grid[9][1],config.get_texture("rm"));
        this->_chesses.push_back(rm1);

        Chess rm2("horse", 60,grid[9][7],config.get_texture("rm"));
        this->_chesses.push_back(rm2);

        Chess rx1("minister", 60,grid[9][2],config.get_texture("rx"));
        this->_chesses.push_back(rx1);

        Chess rx2("minister", 60,grid[9][6],config.get_texture("rx"));
        this->_chesses.push_back(rx2);

        Chess rs1( "scholar",60,grid[9][3],config.get_texture("rs"));
        this->_chesses.push_back(rs1);

        Chess rs2("scholar", 60,grid[9][5],config.get_texture("rs"));
        this->_chesses.push_back(rs2);

        Chess rj( "king",60,grid[9][4],config.get_texture("rj"));
        this->_chesses.push_back(rj);

        Chess rp1("boom", 60,grid[7][1],config.get_texture("rp"));
        this->_chesses.push_back(rp1);

        Chess rp2( "boom",60,grid[7][7],config.get_texture("rp"));
        this->_chesses.push_back(rp2);

        Chess rb1( "solider",60,grid[6][0],config.get_texture("rb"));
        this->_chesses.push_back(rb1);

        Chess rb2( "solider",60,grid[6][2],config.get_texture("rb"));
        this->_chesses.push_back(rb2);

        Chess rb3( "solider",60,grid[6][4],config.get_texture("rb"));
        this->_chesses.push_back(rb3);

        Chess rb4( "solider",60,grid[6][6],config.get_texture("rb"));
        this->_chesses.push_back(rb4);

        Chess rb5( "solider",60,grid[6][8],config.get_texture("rb"));
        this->_chesses.push_back(rb5);
    }
public:
    Chesses(){
        this->_chesses = vector<Chess>();
        this->_init_chesses();
    }
    ~Chesses()= default;

    int update_chesses(sf::RenderWindow &window, sf::Event& event){
        for(auto & _chesse : this->_chesses){
            if(_chesse.isMouseOver(window)){
                _chesse.setBackColor(sf::Color(215, 212, 155));
                continue;
            }
            _chesse.setBackColor(sf::Color(215, 186, 140));
        }

        for(auto & _chesse : this->_chesses)
        {
            bool clicked = _chesse.isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;
            // if(clicked && i == ACTION CODE DEFINED IN SYSTEM) return ACTION CODE DEFINED IN SYSTEM;
            // ex:
            //&& i == TEST
            if(clicked) return TEST;
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