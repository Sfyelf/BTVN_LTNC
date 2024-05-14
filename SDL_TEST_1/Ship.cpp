
#include "Ship.hpp"
#include "Input.hpp"
#include "Time.hpp"

Ship::Ship() :
    shipImage("graphics/ship.png", 0, 0),
    speed(300),
    x(360),
    y(600),
    inputDirection(0)
{

}

void Ship::Render()
{
    shipImage.xpos = x;
    shipImage.ypos = y;
    shipImage.Render();
}

void Ship::HandleMove()
{
    x += inputDirection * speed * Time::deltaTime();
    if (x > 800) x = 0;
    if (x < 0) x = 800;
}

void Ship::HandleInput()
{
    inputDirection = 0;
    if (Input::GetKey(SDL_SCANCODE_LEFT)) inputDirection -= 1;
    if (Input::GetKey(SDL_SCANCODE_RIGHT)) inputDirection += 1;
}

void Ship::Shoot()
{

}

void Ship::UpdateBullet()
{

}
