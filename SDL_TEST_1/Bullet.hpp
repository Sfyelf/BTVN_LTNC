
#pragma once

#include <SDL.h>
#include "Image.hpp"

class Bullet
{
public:
    Bullet(float xship, float yship);
    ~Bullet();

    void Render();
    void Move();
    bool isOffScreen();

    float x, y;

private:
    double speed;

    Image bulletImage;

};
