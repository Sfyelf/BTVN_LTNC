
#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "Game.hpp"

class Image{
public:
    Image(const char* texturesheet, double x, double y);
    ~Image();

    void Render();
    void ChangeImage(const char* texturesheet);

    double xpos;
    double ypos;


private:

    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;

};

#endif
