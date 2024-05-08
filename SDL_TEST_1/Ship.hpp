#ifndef SHIP_HPP
#define SHIP_HPP

#include "Image.hpp"

class Ship
{
public:
    Ship();
    Image shipImage;
    void Move(int direction);


    // You might add a handleInput() function here later

private:
    int speed;



};

#endif
