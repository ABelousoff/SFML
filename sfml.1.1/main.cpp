#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main(int, char**){

    sf::RenderWindow win(sf::VideoMode(100*2, 220*2), "Svetofor");

    sf::RectangleShape box;
    box.setSize({60*2, 180*2});
    box.setFillColor(sf::Color(30, 30, 30));
    box.setPosition(20*2, 20*2);

    sf::CircleShape red(25*2);
    red.setPosition(25*2, 25*2);
    red.setFillColor(sf::Color::Red);

    sf::CircleShape yello(25*2);
    yello.setPosition(25*2, 85*2);
    yello.setFillColor(sf::Color::Yellow);

    sf::CircleShape green(25*2);
    green.setPosition(25*2, 145*2);
    green.setFillColor(sf::Color::Green);
    
    win.clear(sf::Color::White);
    win.draw(box);
    win.draw(red);
    win.draw(yello);
    win.draw(green);
    win.display();
    sf::sleep(sf::seconds(5));
    return 0;
}