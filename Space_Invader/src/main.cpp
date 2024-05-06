#include "Game.hpp"


Game *game = nullptr;


int main(int argc, char** argv){

    game = new Game();

    game->init("Space_Invader", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);

    while (game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
        
    }

    game->clean();

    return 0;
}