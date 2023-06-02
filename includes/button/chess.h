#ifndef CHINESE_CHESS_CHESS_H
#define CHINESE_CHESS_CHESS_H

#include <SFML/Graphics.hpp>

class Chess {
public:
    Chess()= default;
    Chess(float radius, sf::Vector2f position){
        circle.setRadius(radius);
        circle.setPosition(position);
    }

    void setBackColor(sf::Color color){
        circle.setFillColor(color);
    }

    void setTexture(sf::Texture &texture){
        circle.setTexture(&texture);
    }

//    void setPosition(sf::Vector2f point){
//        circle.setPosition(point);
//
//        // Center text on button:
//        float div = 2.0 + btnHeight / btnWidth;
//
//        float xPos = (point.x + btnWidth / div) - (text.getLocalBounds().width / 2);
//        float yPos = (point.y + btnHeight / div) - (text.getLocalBounds().height / 2);
//        text.setPosition(xPos, yPos);
//    }

    void drawTo(sf::RenderWindow &window){
        window.draw(circle);
        //window.draw(texture);
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

private:
    sf::CircleShape circle;
    sf::Texture texture;
};

#endif //CHINESE_CHESS_CHESS_H
