
#include "Bullet.hpp"
#include "Time.hpp"

Bullet::Bullet(float xship, float yship) :
    speed(300),
    bulletImage("graphics/bullet.png", x, y),
    x(xship),
    y(yship)

{

}

Bullet::~Bullet()
{

}

void Bullet::Move()
{
    y -= speed*Time::deltaTime();
}

void Bullet::Render()
{
    bulletImage.xpos = x + 25;
    bulletImage.ypos = y;
    bulletImage.Render();
}

bool Bullet::isOffScreen(float windowHeight)
{
    return y < 0;
}
