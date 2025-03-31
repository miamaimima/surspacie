#include <SFML/Config.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

using namespace sf;


int main()
{
    RenderWindow window(sf::VideoMode({1920u, 1080u}), "surspacie");
    window.setFramerateLimit(144);

    std::cout << SFML_VERSION_MAJOR << '.' << SFML_VERSION_MINOR;

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
                window.close();
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }
        window.clear(Color::Black);
        window.display();
    }
}
