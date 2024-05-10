#ifndef SHIP_HPP
#define SHIP_HPP

#include "Image.hpp"

class Ship
{
public:
    Ship();

    void Render();
    void HandleInput();
    void HandleMove();

private:
    Image shipImage;

    double speed;

    int inputDirection;
};

#endif
