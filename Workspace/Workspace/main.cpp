#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 768), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    shape.setPosition(0.0f, 568.0f);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                const auto& pos = sf::Mouse::getPosition();
                std::cout << pos.x << ", " << pos.y << "\n";
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}