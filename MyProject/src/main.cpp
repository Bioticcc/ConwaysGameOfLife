
#include "Header.hpp"
#include "game.cpp"

/*
UPDATING CMAKE FOR RUNNING PROGRAM:
 1) cmake ..
 2) make
 3) ./MyProject

PUSHING TO GITHUB
 1) git add .
 2) git commit -m "message"
 3) git status
 4) git push 
 5) git push origin main
*/

int main()
{
    // Create a window with title "My SFML Window" and size 800x600
    Game Conway;
    Conway.runApp();

    return 0;
}
