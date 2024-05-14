
#include "Bullet.hpp"
#include "Time.hpp"

Bullet::Bullet(float xship, float yship) :
    speed(20),
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
    bulletImage.xpos = x;
    bulletImage.ypos = y;
}

bool Bullet::isOffScreen()
{
    return y < 0;
}
