
#include "Aliens.hpp"
#include <SDL_image.h>
#include "Time.hpp"

Alien::Alien(const char* path) :
    alienImage(path, 0, 0),
    x(50),
    y(50),
    speed(20)
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
