
#pragma once

#include <SDL.h>
#include "Image.hpp"

class AliensBullet
{
public:
    AliensBullet(float xalien, float yalien);
    ~AliensBullet();

    void Render();
    void Move();
    bool isOffScreen();

    float x, y;

private:
    double speed;

    Image aliensBulletImage;
};
