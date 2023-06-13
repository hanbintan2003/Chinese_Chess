#ifndef CHINESE_CHESS_CHESS_H
#define CHINESE_CHESS_CHESS_H

#include "SFML/Graphics.hpp"

class Chess {
public:
    Chess()= default;
    Chess(float radius, sf::Vector2f position){
        this->name=0;
        circle.setRadius(radius);
        circle.setPosition(position);
        circle.setFillColor(sf::Color::Transparent);
    }

    Chess(int name, float radius, sf::Vector2f position, sf::Texture &texture){
        this->name=name;
        circle.setRadius(radius);
        circle.setPosition(position);
        circle.setTexture(&texture);

        circleColor.setRadius(radius);
        circleColor.setPosition(position);
        //circleColor.setFillColor(sf::Color(215, 186, 140));
    }


    int getName(){
        return this->name;
    }

    sf::Vector2f getPosition() {
        return circle.getPosition();
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
    int name;
};

#endif //CHINESE_CHESS_CHESS_H
