
#ifndef Game_hpp
#define Game_hpp

#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#include "Ship.hpp"

extern Ship *ship;

class Game
{
    public:
        Game();
        ~Game();

        bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
        void createGame();
        void createMenu();

        void handleEvents();
        void update();
        void render();
        void clean();
        void clearGame();
        void resetGame();

        static SDL_Renderer* renderer;
        bool gameStart = 0;
        bool continueGame = 0;
        static bool gameEnd;


    private:
        int cnt = 0;
        SDL_Window *window;
        //SDL_Renderer *renderer;

        SDL_Texture *backgroundTexture, *menuTexture;

};

#endif
