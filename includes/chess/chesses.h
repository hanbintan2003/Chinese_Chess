#ifndef CHESSES_H
#define CHESSES_H

#include "../config/config.h"
#include "chess.h"
#include "SFML/Graphics.hpp"

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc1( 28,60,0,0,config.get_texture("bc"));
        this->_chesses.push_back(bc1);

        Chess bc2( 29,60,0,8,config.get_texture("bc"));
        this->_chesses.push_back(bc2);

        Chess bm1(30,60,0,1,config.get_texture("bm"));
        this->_chesses.push_back(bm1);

        Chess bm2(31,60,0,7,config.get_texture("bm"));
        this->_chesses.push_back(bm2);

        Chess bx1(32, 60,0,2,config.get_texture("bx"));
        this->_chesses.push_back(bx1);

        Chess bx2(33,60,0,6,config.get_texture("bx"));
        this->_chesses.push_back(bx2);

        Chess bs1(34, 60,0,3,config.get_texture("bs"));
        this->_chesses.push_back(bs1);

        Chess bs2(35, 60,0,5,config.get_texture("bs"));
        this->_chesses.push_back(bs2);

        Chess bj(36, 60,0,4,config.get_texture("bj"));
        this->_chesses.push_back(bj);

        Chess bp1(26, 60,2,1,config.get_texture("bp"));
        this->_chesses.push_back(bp1);

        Chess bp2(27, 60,2,7,config.get_texture("bp"));
        this->_chesses.push_back(bp2);

        Chess bz1(21, 60,3,0,config.get_texture("bz"));
        this->_chesses.push_back(bz1);

        Chess bz2(22, 60,3,2,config.get_texture("bz"));
        this->_chesses.push_back(bz2);

        Chess bz3(23, 60,3,4,config.get_texture("bz"));
        this->_chesses.push_back(bz3);

        Chess bz4(24, 60,3,6,config.get_texture("bz"));
        this->_chesses.push_back(bz4);

        Chess bz5(25, 60,3,8,config.get_texture("bz"));
        this->_chesses.push_back(bz5);


        Chess rc1(8, 60,9,0,config.get_texture("rc"));
        this->_chesses.push_back(rc1);

        Chess rc2(9, 60,9,8,config.get_texture("rc"));
        this->_chesses.push_back(rc2);

        Chess rm1(10, 60,9,1,config.get_texture("rm"));
        this->_chesses.push_back(rm1);

        Chess rm2(11, 60,9,7,config.get_texture("rm"));
        this->_chesses.push_back(rm2);

        Chess rx1(12, 60,9,2,config.get_texture("rx"));
        this->_chesses.push_back(rx1);

        Chess rx2(13, 60,9,6,config.get_texture("rx"));
        this->_chesses.push_back(rx2);

        Chess rs1(14,60,9,3,config.get_texture("rs"));
        this->_chesses.push_back(rs1);

        Chess rs2(15, 60,9,5,config.get_texture("rs"));
        this->_chesses.push_back(rs2);

        Chess rj(16,60,9,4,config.get_texture("rj"));
        this->_chesses.push_back(rj);

        Chess rp1(6, 60,7,1,config.get_texture("rp"));
        this->_chesses.push_back(rp1);

        Chess rp2( 7,60,7,7,config.get_texture("rp"));
        this->_chesses.push_back(rp2);

        Chess rb1(1,60,6,0,config.get_texture("rb"));
        this->_chesses.push_back(rb1);

        Chess rb2(2,60,6,2,config.get_texture("rb"));
        this->_chesses.push_back(rb2);

        Chess rb3( 3,60,6,4,config.get_texture("rb"));
        this->_chesses.push_back(rb3);

        Chess rb4( 4,60,6,6,config.get_texture("rb"));
        this->_chesses.push_back(rb4);

        Chess rb5( 5,60,6,8,config.get_texture("rb"));
        this->_chesses.push_back(rb5);

        //forloop for grid
        for(int i=0;i<10;i++){
            for(int j=0;j<9;j++){
                bool flag = false;
                for (auto & _chesse : this->_chesses) {
                    if(_chesse.getPosition() == grid[i][j]){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    Chess empty(60,i,j);
                    this->_chesses.push_back(empty);
                }
            }
        }
    }
public:
    Chesses(){
        this->_chesses = vector<Chess>();
        this->_init_chesses();
    }
    ~Chesses()= default;

    int update_chesses(sf::RenderWindow &window, sf::Event& event, int& play, int& name){
        for(auto & _chesse : this->_chesses){
            if((_chesse.isMouseOver(window) && _chesse.getName() >0 && _chesse.getName() < 17 && play == 0 && name == -1)
            ||(_chesse.isMouseOver(window) && _chesse.getName() >20 && _chesse.getName() < 37 && play == 1 && name == -1))
            {
                _chesse.setBackColor(sf::Color(225, 196, 150));
                continue;
            }

            if (_chesse.isMouseOver(window) && name != -1 && _chesse.getName() == name)
            {
                _chesse.setBackColor(sf::Color(225, 196, 150));
                continue;
            }

            _chesse.setBackColor(sf::Color(215, 186, 140));
        }

        for(auto & _chesse : this->_chesses){
            bool clicked = _chesse.isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;

            //select
            if((clicked && _chesse.getName() >0 && _chesse.getName() < 17 && play == 0 && name == -1)
            || (clicked && _chesse.getName() >20 && _chesse.getName() < 37 && play == 1 && name == -1)){

                return _chesse.getName();
            }

            //unSelect
            if(clicked && name != -1 && _chesse.getName() == name){
                name = -1;
                if (play == 1)play = 0;
                else play = 1;
                return -1;
            }

            //for soldier move
            if((clicked && (_chesse.getName()<1 || _chesse.getName()>16) && _chesse.getName()!=name && play == 0 && name >=1 &&name <6)||
            (clicked && _chesse.getName()<21) && _chesse.getName()!=name && play == 1&& name >=11 &&name <16)
            {
                cout<<"stopby";
                int x = _chesse.getX();
                int y = _chesse.getY();


                for (auto & _chesse : this->_chesses) {
                    if(_chesse.getName() == name){
                        cout<<"work";
                        if (play == 0){
                            cout<<_chesse.getY();

                            if (_chesse.getY() > 4){
                                cout<<"work";
                                if (x==_chesse.getX() && y==_chesse.getY()+1){
                                    _chesse.move(_chesse.getX(),_chesse.getY()+1);
                                }
                            }
                        }
                    }
                }
                _chesse.move(_chesse.getX(),_chesse.getY()-1);


                name = -1;
                if (play == 1)play = 0;
                else play = 1;
                return -1;
            }


        }
        return INVALID;
    }

    void draw_chesses(sf::RenderWindow &window){
        for(auto & _chesse : this->_chesses)_chesse.drawTo(window);
    }
};

#endif // !CHESSES_H