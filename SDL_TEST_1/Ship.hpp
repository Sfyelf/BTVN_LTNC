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
    void Shoot();
    void UpdateBullet();

private:
    Image shipImage;

    float x, y;

    double speed;

    int inputDirection;
};

#endif
