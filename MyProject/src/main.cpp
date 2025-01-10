
#include "Header.hpp"


int main()
{
    // Create a window with title "My SFML Window" and size 800x600
    sf::RenderWindow window(sf::VideoMode(800, 600), "My SFML Window");

    // Main loop to keep the window open until it is closed
    while (window.isOpen())
    {
        sf::Event event;
        // Process events
        while (window.pollEvent(event))
        {
            // Close window if the close event is triggered
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the screen with a color (black)
        window.clear(sf::Color::Green);

        // Draw everything here (nothing in this case)
        // window.draw(...);  // You can draw stuff here

        // Display the contents of the window
        window.display();
    }

    return 0;
}
