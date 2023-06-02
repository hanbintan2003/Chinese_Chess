#ifndef CHINESE_CHESS_CHESS_H
#define CHINESE_CHESS_CHESS_H

#include <SFML/Graphics.hpp>

class Chess {
public:
    Chess()= default;
    Chess(float radius, sf::Vector2f position, sf::Texture &texture){
        circle.setRadius(radius);
        circle.setPosition(position);
        circle.setTexture(&texture);

        circleColor.setRadius(radius);
        circleColor.setPosition(position);
        circleColor.setFillColor(sf::Color(215, 186, 140));
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

private:
    sf::CircleShape circle;
    sf::CircleShape circleColor;
};

#endif //CHINESE_CHESS_CHESS_H
