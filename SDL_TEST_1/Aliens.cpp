
#include "Aliens.hpp"
#include <SDL_image.h>
#include "Time.hpp"

Alien::Alien(const char* path) :
    alienImage(path, 0, 0),
    x(50),
    y(50),
    speed(20),
    alienBulletCooldown(0),
    alienBulletCooldownTime(0.5)
{

}

Alien::~Alien()
{

}

void Alien::Render()
{
    alienImage.xpos = x;
    alienImage.ypos = y;
    alienImage.Render();

    for (auto bullets : alienBullet)
    {
        bullets.Render();
    }
}

void Alien::Update()
{
    x = x + speed*direct*Time::deltaTime();
    if (check == 1)
    {
        y = y + 5;
        check = 0;
    }
}

SDL_Rect Alien::getRect()
{
    return alienImage.getRect();
}

void Alien::Shoot()
{
    if (alienBulletCooldown <= 0) {
        alienBullet.emplace_back(x, y);
        alienBulletCooldown = alienBulletCooldownTime; // Reset the cooldown timer
    }
}

void Alien::UpdateAlienBullet()
{
    for (auto it = alienBullet.begin(); it != alienBullet.end();)
    {
        it->Move();
        if (it->isOffScreen()) {
            it = alienBullet.erase(it);
        } else {
            ++it;
        }
    }

    if (alienBulletCooldown > 0)
    {
        alienBulletCooldown -= Time::deltaTime(); // Decrease the cooldown timer
    }
}
