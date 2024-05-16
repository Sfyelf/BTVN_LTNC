#pragma once

#include <SDL.h>
#include <string>
#include "Image.hpp"

class Alien
{
public:

    Alien(const char* path);
    ~Alien();

    void Render();
    void Update();

    double x, y, direct, check = 0;

    SDL_Rect getRect();

private:
    Image alienImage;



    double speed;
};

