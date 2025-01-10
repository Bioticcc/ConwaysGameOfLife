#include "Header.hpp"

class Game {

    private:
        //Grid grid;
        //Unit unitArray;
        
    public:
        Game(){};
        //still need gets/sets/copys/deconstructors

        void runApp(){
            sf::RenderWindow window(sf::VideoMode(900,900), "Conway");
            while (window.isOpen())
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
                window.clear(sf::Color::White);
                window.display();
            }
        }
};