#ifndef CHESSES_H
#define CHESSES_H

#include "../config/config.h"
#include "chess.h"
#include "SFML/Graphics.hpp"

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc1( "car",60,grid[0][0],config.get_texture("bc"));
        this->_chesses.push_back(bc1);//0

        Chess bc2( "car",60,grid[0][8],config.get_texture("bc"));
        this->_chesses.push_back(bc2);//1

        Chess bm1("horse", 60,grid[0][1],config.get_texture("bm"));
        this->_chesses.push_back(bm1);//2

        Chess bm2("horse", 60,grid[0][7],config.get_texture("bm"));
        this->_chesses.push_back(bm2);//3

        Chess bx1("minister", 60,grid[0][2],config.get_texture("bx"));
        this->_chesses.push_back(bx1);//4

        Chess bx2("minister", 60,grid[0][6],config.get_texture("bx"));
        this->_chesses.push_back(bx2);//5

        Chess bs1("scholar", 60,grid[0][3],config.get_texture("bs"));
        this->_chesses.push_back(bs1);//6

        Chess bs2("scholar", 60,grid[0][5],config.get_texture("bs"));
        this->_chesses.push_back(bs2);//7

        Chess bj("king", 60,grid[0][4],config.get_texture("bj"));
        this->_chesses.push_back(bj);//8

        Chess bp1("boom", 60,grid[2][1],config.get_texture("bp"));
        this->_chesses.push_back(bp1);//9

        Chess bp2("boom", 60,grid[2][7],config.get_texture("bp"));
        this->_chesses.push_back(bp2);//10

        Chess bz1("solider", 60,grid[3][0],config.get_texture("bz"));
        this->_chesses.push_back(bz1);//11

        Chess bz2("solider", 60,grid[3][2],config.get_texture("bz"));
        this->_chesses.push_back(bz2);//12

        Chess bz3("solider", 60,grid[3][4],config.get_texture("bz"));
        this->_chesses.push_back(bz3);//13

        Chess bz4("solider", 60,grid[3][6],config.get_texture("bz"));
        this->_chesses.push_back(bz4);//14

        Chess bz5("solider", 60,grid[3][8],config.get_texture("bz"));
        this->_chesses.push_back(bz5);//15


        Chess rc1("car", 60,grid[9][0],config.get_texture("rc"));
        this->_chesses.push_back(rc1);//16

        Chess rc2("car", 60,grid[9][8],config.get_texture("rc"));
        this->_chesses.push_back(rc2);//17

        Chess rm1("horse", 60,grid[9][1],config.get_texture("rm"));
        this->_chesses.push_back(rm1);//18

        Chess rm2("horse", 60,grid[9][7],config.get_texture("rm"));
        this->_chesses.push_back(rm2);//19

        Chess rx1("minister", 60,grid[9][2],config.get_texture("rx"));
        this->_chesses.push_back(rx1);//20

        Chess rx2("minister", 60,grid[9][6],config.get_texture("rx"));
        this->_chesses.push_back(rx2);//21

        Chess rs1( "scholar",60,grid[9][3],config.get_texture("rs"));
        this->_chesses.push_back(rs1);//22

        Chess rs2("scholar", 60,grid[9][5],config.get_texture("rs"));
        this->_chesses.push_back(rs2);//23

        Chess rj( "king",60,grid[9][4],config.get_texture("rj"));
        this->_chesses.push_back(rj);//24

        Chess rp1("boom", 60,grid[7][1],config.get_texture("rp"));
        this->_chesses.push_back(rp1);//25

        Chess rp2( "boom",60,grid[7][7],config.get_texture("rp"));
        this->_chesses.push_back(rp2);//26

        Chess rb1( "solider",60,grid[6][0],config.get_texture("rb"));
        this->_chesses.push_back(rb1);//27

        Chess rb2( "solider",60,grid[6][2],config.get_texture("rb"));
        this->_chesses.push_back(rb2);//28

        Chess rb3( "solider",60,grid[6][4],config.get_texture("rb"));
        this->_chesses.push_back(rb3);//29

        Chess rb4( "solider",60,grid[6][6],config.get_texture("rb"));
        this->_chesses.push_back(rb4);//30

        Chess rb5( "solider",60,grid[6][8],config.get_texture("rb"));
        this->_chesses.push_back(rb5);//31
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
                _chesse.setBackColor(sf::Color(225, 196, 150));
                continue;
            }
            _chesse.setBackColor(sf::Color(215, 186, 140));
        }

        for(auto & _chesse : this->_chesses)
        {
            bool clicked = _chesse.isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;

            if(clicked) {
                cout<<_chesse.getName()<<" selected"<<endl;

                return Work;

            }
        }
        return INVALID;
    }

    void draw_chesses(sf::RenderWindow &window){
        for(auto & _chesse : this->_chesses){
            //this->_buttons[i].setFont(config.get_font(ARIAL));
            _chesse.drawTo(window);
        }
    }
};

#endif // !CHESSES_H