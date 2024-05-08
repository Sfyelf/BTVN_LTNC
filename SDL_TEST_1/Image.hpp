
#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Game.hpp"

class Image{
public:
    Image(const char* texturesheet, int x, int y);
    ~Image();

    void Render();

    int xpos;
    int ypos;


private:

    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;

};

#endif
