
#include "Ship.hpp"
#include "Input.hpp"
#include "Time.hpp"

Ship::Ship() :
    shipImage("graphics/ship.png", 0, 0),
    speed(300),
    x(360),
    y(600),
    inputDirection(0),
    bulletCooldown(0),
    bulletCooldownTime(0.5)
{

}

void Ship::Render()
{
    shipImage.xpos = x;
    shipImage.ypos = y;
    shipImage.Render();

    for (auto& bullet : bullets)
    {
        bullet.Render();
    }
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
    if (Input::GetKey(SDL_SCANCODE_SPACE)) Shoot();
}

void Ship::Shoot()
{
    if (bulletCooldown <= 0)
    {
        bullets.emplace_back(x, y);
        bulletCooldown = bulletCooldownTime; // Reset the cooldown timer
    }
}

void Ship::UpdateBullet()
{
    //std::cout << "Bullets count before update: " << bullets.size() << std::endl;

    for (auto it = bullets.begin(); it != bullets.end();) {
        it->Move();
        if (it->isOffScreen(640)) {
            //std::cout << "Bullet removed at position: " << it->y << std::endl;
            it = bullets.erase(it);
        } else {
            ++it;
        }
    }

    //std::cout << "Bullets count after update: " << bullets.size() << std::endl;

    if (bulletCooldown > 0)
    {
        bulletCooldown -= Time::deltaTime(); // Decrease the cooldown timer
    }
}
