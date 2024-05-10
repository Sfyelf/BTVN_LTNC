
#include "Ship.hpp"
#include "Input.hpp"
#include "Time.hpp"

Ship::Ship() :
    shipImage("graphics/ship.png", 50, 300),
    speed(300),
    inputDirection(0)
{

}

void Ship::Render()
{
    shipImage.Render();
}

void Ship::HandleMove()
{
    SDL_Log("%d %f %f",inputDirection, speed, Time::deltaTime());
    shipImage.xpos += inputDirection * speed * Time::deltaTime();
}

void Ship::HandleInput()
{
    inputDirection = 0;
    if (Input::GetKey(SDL_SCANCODE_A)) inputDirection -= 1;
    if (Input::GetKey(SDL_SCANCODE_D)) inputDirection += 1;
}
