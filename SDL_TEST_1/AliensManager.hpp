
#pragma once

#include <list>
#include "SDL.h"

class Alien;

class AliensManager
{
public:
    AliensManager();
    ~AliensManager();

    void Render();
    void Update();
    Alien* Spawn(float x, float y);
    void SpawnWave(float xOrigin, float yOrigin, int w, int h, float xDistance, float yDistance);
    void Destroy(Alien* alien);
    bool AllEnemyDead();

    void Clear();

    SDL_Rect getWaveRect();

    float xOrigin, yOrigin;
    float xDistance, yDistance;

private:
    std::list<Alien*> alienList;

    SDL_Rect rect;
};
