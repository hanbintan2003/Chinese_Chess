#ifndef CHINESE_CHESS_CHESS_H
#define CHINESE_CHESS_CHESS_H

#include "SFML/Graphics.hpp"

class Chess {
public:
    Chess()= default;
    Chess( int i, int j){
        this->x=i;
        this->y=j;
        this->name=0;
        circle.setRadius(30);
        circle.setPosition(grid[i][j]);
        circle.setFillColor(sf::Color::Transparent);
    }

    Chess(int name,  int i, int j, sf::Texture &texture){
        this->x=i;
        this->y=j;
        this->name=name;
        circle.setRadius(30);
        circle.setPosition(grid[i][j]);
        circle.setTexture(&texture);

        circleColor.setRadius(30);
        circleColor.setPosition(grid[i][j]);
    }


    int getName(){
        return this->name;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }

    sf::Vector2f getPosition() {
        return circle.getPosition();
    }

    void move(int i, int j){
        this->x=i;
        this->y=j;
        circle.setPosition(grid[i][j]);
        circleColor.setPosition(grid[i][j]);
    }

    void setPosition(sf::Vector2f newPos) {
        circle.setPosition(newPos);
        circleColor.setPosition(newPos);
    }


    void setBackColor(sf::Color color){
        circleColor.setFillColor(color);
    }

    void drawTo(sf::RenderWindow &window){
        window.draw(circleColor);
        window.draw(circle);
    }

    // Check if the mouse is within the bounds of the button:
    bool isMouseOver(sf::RenderWindow &window){
        sf::Vector2i mouseCoords({ sf::Mouse::getPosition(window).x,
                                   sf::Mouse::getPosition(window).y });

        sf::Vector2f realCoords = window.mapPixelToCoords(mouseCoords);

        float mouseX = realCoords.x;
        float mouseY = realCoords.y;

        int btnPosX = circle.getPosition().x;
        int btnPosY = circle.getPosition().y;

        int btnxPosWidth = circle.getPosition().x + circle.getGlobalBounds().width;
        int btnyPosHeight = circle.getPosition().y + circle.getGlobalBounds().height;

        if (mouseX < btnxPosWidth && mouseX > btnPosX && mouseY < btnyPosHeight && mouseY > btnPosY) {
            return true;
        }
        return false;
    }

    bool isMouseOverGrid(sf::RenderWindow& window) {
        sf::Vector2i mouseCoords({ sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y });
        sf::Vector2f realCoords = window.mapPixelToCoords(mouseCoords);

        float mouseX = realCoords.x;
        float mouseY = realCoords.y;

        const float radius = 60.0f;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 9; j++) {
                float dx = grid[i][j].x - mouseX;
                float dy = grid[i][j].y - mouseY;
                if (dx * dx + dy * dy <= radius * radius) {
                    return true;
                }
            }
        }

        return false;
    }


private:
    sf::CircleShape circle;
    sf::CircleShape circleColor;
    int x;
    int y;
    int name;
};

#endif //CHINESE_CHESS_CHESS_H
