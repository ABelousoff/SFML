#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main(int, char**){
    sf::RenderWindow win(
        sf::VideoMode(800, 600),
        "Rectangles and circle"
    );

    win.clear(sf::Color::White);

    sf::RectangleShape rect1;
    rect1.setSize({60, 20});
    rect1.setRotation(75);
    rect1.setPosition(200, 120);
    rect1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    win.draw(rect1);

    sf::CircleShape circ(48);
    circ.setPosition(260, 120);
    circ.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    win.draw(circ);

    sf::RectangleShape rect2;
    rect2.setSize({120, 15});
    rect2.setRotation(-30);
    rect2.setPosition(200, 120);
    rect2.setFillColor(sf::Color(0xFF, 0x0, 0xFF));
    win.draw(rect2);

    win.display();
    sf::sleep(sf::seconds(5));
    return 0;
}