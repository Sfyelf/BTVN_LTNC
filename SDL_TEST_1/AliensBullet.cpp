
#include "AliensBullet.hpp"
#include "Time.hpp"

AliensBullet::AliensBullet(float xalien, float yalien) :
    speed(300),
    aliensBulletImage("graphics/creep_bullet.png", x, y),
    x(xalien),
    y(yalien)
{

}

AliensBullet::~AliensBullet()
{

}

void AliensBullet::Move()
{
    y += speed*Time::deltaTime();
}

void AliensBullet::Render()
{
    aliensBulletImage.xpos = x + 20;
    aliensBulletImage.ypos = y;
    aliensBulletImage.Render();
}

bool AliensBullet::isOffScreen()
{
    return y > 640;
}
