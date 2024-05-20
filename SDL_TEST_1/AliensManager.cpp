
#include "AliensManager.hpp"
#include<algorithm>

AliensManager::AliensManager() :
    rect()
{}

AliensManager::~AliensManager()
{
    for (Alien *alien : alienList)
    {
        delete alien;
    }
    alienList.clear();
}

void AliensManager::Render()
{
    for (Alien *alien : alienList)
    {
        alien->Render();
    }
}

SDL_Rect AliensManager::getWaveRect()
{
    if (alienList.empty()) return {};

    SDL_Rect temp = alienList.front()->getRect();

    int nx = temp.x;
    int ny = temp.y;
    int fx = temp.x + temp.w;
    int fy = temp.y + temp.h;

    for (Alien *alien : alienList)
    {
        SDL_Rect newrect = alien->getRect();
        nx = std::min(nx, newrect.x);
        ny = std::min(ny, newrect.y);
        fx = std::max(fx, newrect.x + newrect.w);
        fy = std::max(fy, newrect.y + newrect.h);
    }

    temp.x = nx;
    temp.y = ny;
    temp.w = fx-nx;
    temp.h = fy-ny;

    return temp;
}

void AliensManager::Update()
{
    for (Alien *alien : alienList)
    {
        alien->Update();
        alien->UpdateAlienBullet();

        if (std::rand() % 100 < 1)
        {
            alien->Shoot();
        }
    }

    SDL_Rect rect = getWaveRect();
    if (rect.x + rect.w >= 800)
    {
        for (Alien *alien : alienList)
        {
            alien->direct = -1;
            alien->check = 1;
        }
    }

    if (rect.x <= 0)
    {
        for (Alien *alien : alienList)
        {
            alien->direct = 1;
            alien->check = 1;
        }
    }
}

Alien* AliensManager::Spawn(float x, float y)
{
    const char* pathList[3] = {
        "graphics/creep1.png",
        "graphics/creep2.png",
        "graphics/creep3.png"
    };

    int num = rand()%3;

    Alien *alienIns = new Alien(pathList[num]);
    alienList.push_back(alienIns);
    alienIns->x = x;
    alienIns->y = y;

    return alienIns;
}

void AliensManager::SpawnWave(float xOrigin, float yOrigin, int w, int h, float xDistance, float yDistance)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            float xpos = xOrigin + i * xDistance;
            float ypos = yOrigin + j * yDistance;

            Spawn(xpos, ypos);

        }
    }
}

void AliensManager::Destroy(Alien* alien)
{
    auto alienIterator = std::find(alienList.begin(), alienList.end(), alien);
    if (alienIterator == alienList.end()) return;

    delete alien;
    alienList.remove(alien);
}

void AliensManager::Clear()
{
    for (auto alien : alienList)
    {
        delete alien;
    }
    alienList.clear();
}
