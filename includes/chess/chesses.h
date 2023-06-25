#ifndef CHESSES_H
#define CHESSES_H

#include "../config/config.h"
#include "chess.h"
#include "SFML/Graphics.hpp"

class Chesses{
private:
    vector<Chess> _chesses;
    void _init_chesses(){
        Chess bc1( 28,0,0,config.get_texture("bc"));
        this->_chesses.push_back(bc1);

        Chess bc2( 29,8,0,config.get_texture("bc"));
        this->_chesses.push_back(bc2);

        Chess bm1(30,1,0,config.get_texture("bm"));
        this->_chesses.push_back(bm1);

        Chess bm2(31,7,0,config.get_texture("bm"));
        this->_chesses.push_back(bm2);

        Chess bx1(32, 2,0,config.get_texture("bx"));
        this->_chesses.push_back(bx1);

        Chess bx2(33,6,0,config.get_texture("bx"));
        this->_chesses.push_back(bx2);

        Chess bs1(34, 3,0,config.get_texture("bs"));
        this->_chesses.push_back(bs1);

        Chess bs2(35, 5,0,config.get_texture("bs"));
        this->_chesses.push_back(bs2);

        Chess bj(36, 4,0,config.get_texture("bj"));
        this->_chesses.push_back(bj);

        Chess bp1(26, 1,2,config.get_texture("bp"));
        this->_chesses.push_back(bp1);

        Chess bp2(27, 7,2,config.get_texture("bp"));
        this->_chesses.push_back(bp2);

        Chess bz1(21, 0,3,config.get_texture("bz"));
        this->_chesses.push_back(bz1);

        Chess bz2(22, 2,3,config.get_texture("bz"));
        this->_chesses.push_back(bz2);

        Chess bz3(23, 4,3,config.get_texture("bz"));
        this->_chesses.push_back(bz3);

        Chess bz4(24, 6,3,config.get_texture("bz"));
        this->_chesses.push_back(bz4);

        Chess bz5(25, 8,3,config.get_texture("bz"));
        this->_chesses.push_back(bz5);


        Chess rc1(8, 0,9,config.get_texture("rc"));
        this->_chesses.push_back(rc1);

        Chess rc2(9, 8,9,config.get_texture("rc"));
        this->_chesses.push_back(rc2);

        Chess rm1(10, 1,9,config.get_texture("rm"));
        this->_chesses.push_back(rm1);

        Chess rm2(11, 7,9,config.get_texture("rm"));
        this->_chesses.push_back(rm2);

        Chess rx1(12, 2,9,config.get_texture("rx"));
        this->_chesses.push_back(rx1);

        Chess rx2(13, 6,9,config.get_texture("rx"));
        this->_chesses.push_back(rx2);

        Chess rs1(14,3,9,config.get_texture("rs"));
        this->_chesses.push_back(rs1);

        Chess rs2(15, 5,9,config.get_texture("rs"));
        this->_chesses.push_back(rs2);

        Chess rj(16,4,9,config.get_texture("rj"));
        this->_chesses.push_back(rj);

        Chess rp1(6, 1,7,config.get_texture("rp"));
        this->_chesses.push_back(rp1);

        Chess rp2( 7,7,7,config.get_texture("rp"));
        this->_chesses.push_back(rp2);

        Chess rb1(1,0,6,config.get_texture("rb"));
        this->_chesses.push_back(rb1);

        Chess rb2(2,2,6,config.get_texture("rb"));
        this->_chesses.push_back(rb2);

        Chess rb3( 3,4,6,config.get_texture("rb"));
        this->_chesses.push_back(rb3);

        Chess rb4( 4,6,6,config.get_texture("rb"));
        this->_chesses.push_back(rb4);

        Chess rb5( 5,8,6,config.get_texture("rb"));
        this->_chesses.push_back(rb5);

        //forloop for grid
        for(int i=0;i<9;i++){
            for(int j=0;j<10;j++){
                bool flag = false;
                for (auto & _chesse : this->_chesses) {
                    if(_chesse.getPosition() == grid[i][j]){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    Chess empty(i,j);
                    this->_chesses.push_back(empty);
                }
            }
        }
        cout<<"red first"<<endl;
    }
public:
    Chesses(){
        this->_chesses = vector<Chess>();
        this->_init_chesses();
    }
    
    ~Chesses()= default;

    //need to test
    void switchSpot(int name, int x, int y){
        int old_x, old_y;
        for(int i=0;i<this->_chesses.size();i++){
            if (this->_chesses[i].getX() == x && this->_chesses[i].getY() == y &&
            (this->_chesses[i].getName() == 16 || this->_chesses[i].getName() == 36)){
                cout<<"game over"<<endl;
            }
            else if (this->_chesses[i].getX() == x && this->_chesses[i].getY() == y){

                this->_chesses.erase(this->_chesses.begin() + i);
            }
        }
        for(auto & _chesse : this->_chesses){
            if(_chesse.getName() == name){
                old_x = _chesse.getX();
                old_y = _chesse.getY();
                _chesse.setPosition(x,y);
                break;
            }
        }

        Chess empty(old_x,old_y);
        this->_chesses.push_back(empty);
    }

    int update_chesses(sf::RenderWindow &window, sf::Event& event, int& play, int& name){
        bool work = false;

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

            _chesse.setBackColor(sf::Color(235, 200, 150));
        }

        for(auto & _chesse : this->_chesses){
            bool clicked = _chesse.isMouseOver(window) && event.type == sf::Event::MouseButtonPressed;

            //select
            if((clicked && _chesse.getName() >0 && _chesse.getName() < 17 && play == 0 && name == -1)
            || (clicked && _chesse.getName() >20 && _chesse.getName() < 37 && play == 1 && name == -1)){
                return _chesse.getName();
            }

            //unSelect
            if(clicked && name != -1 && _chesse.getName() == name) {return -1;}

            //for soldier move
            if
            ((clicked && (_chesse.getName()<1 || _chesse.getName()>16) && _chesse.getName()!=name && play == 0 && name >=1 &&name <6)
            ||
            (clicked && _chesse.getName()<21) && _chesse.getName()!=name && play == 1&& name >=21 &&name <26)
            {
                int x = _chesse.getX();
                int y = _chesse.getY();

                for (auto & _chesse : this->_chesses) {
                    if(_chesse.getName() == name){
                        if (play == 0){
                            if (_chesse.getY() > 4){
                                if (x==_chesse.getX() && y==_chesse.getY()-1){
                                    this->switchSpot(name,x,y);
                                    play=1;
                                    return -1;
                                }
                            }else{
                                if (y==_chesse.getY() && (x==_chesse.getX()+1 || x==_chesse.getX()-1)
                                ||
                                (x==_chesse.getX() && y==_chesse.getY()-1)){
                                    this->switchSpot(name,x,y);

                                    play=1;
                                    return -1;
                                }
                            }
                        }else{
                            if (_chesse.getY() < 5){
                                if (x==_chesse.getX() && y==_chesse.getY()+1){
                                    this->switchSpot(name,x,y);
                                    play=0;
                                    return -1;
                                }
                            }else{
                                cout<<"in ";
                                if ((y==_chesse.getY() && (x==_chesse.getX()+1 || x==_chesse.getX()-1))
                                    ||
                                    (x==_chesse.getX() && y==_chesse.getY()+1)){

                                    this->switchSpot(name,x,y);
                                    play=0;
                                    return -1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (work){
            name = -1;
            if (play == 1){
                play = 0;
                cout<<"reds turn"<<endl;
            }
            else {
                play = 1;
                cout<<"blacks turn"<<endl;
            }
            return -1;
        }else{
            return name;
        }
    }

    void draw_chesses(sf::RenderWindow &window){
        for(auto & _chesse : this->_chesses)_chesse.drawTo(window);
    }
};

#endif // !CHESSES_H