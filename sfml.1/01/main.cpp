#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>

int main(int, char**){
    sf::RenderWindow win(sf::VideoMode(800, 600), "title");


    sf::CircleShape shape1(40);
    shape1.setPosition(200, 120);
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));

    sf::CircleShape shape2(48);
    shape2.setPosition(260, 120);
    shape2.setFillColor(sf::Color(0x0, 0xFF, 0x0));


    sf::CircleShape shape3(60);
    shape3.setPosition(320, 160);
    shape3.setFillColor(sf::Color(0x0, 0x0, 0xFF));


    sf::CircleShape shape4(75);
    shape4.setPosition(330, 220);
    shape4.setFillColor(sf::Color(0xFF, 0xFF, 0x0));


    win.clear();
    win.draw(shape1);
    win.draw(shape2);
    win.draw(shape3);
    win.draw(shape4);
    win.display();

    sf::sleep(sf::seconds(5));
    return 0;
}