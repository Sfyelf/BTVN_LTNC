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

    double x, y;

private:
    Image alienImage;



    double speed;
};

