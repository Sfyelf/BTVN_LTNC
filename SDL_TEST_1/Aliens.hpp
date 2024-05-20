#pragma once

#include <SDL.h>
#include <string>
#include "Image.hpp"
#include <list>
#include "AliensBullet.hpp"

class Alien
{
public:

    Alien(const char* path);
    ~Alien();

    void Render();
    void Update();
    void Shoot();
    void UpdateAlienBullet();

    double x, y, direct, check = 0;

    SDL_Rect getRect();

private:
    Image alienImage;



    double speed;

    std::list<AliensBullet> alienBullet;

    float alienBulletCooldown;
    const float alienBulletCooldownTime;

};

