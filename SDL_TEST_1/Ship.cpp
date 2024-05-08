
#include "Ship.hpp"

Ship::Ship() :
    shipImage("graphics/ship.png", 50, 50),
    speed(5)
{

}

void Ship::Move(int direction)
{
    shipImage.xpos += direction*speed;
}
