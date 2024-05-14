
#include "AliensManager.hpp"
#include<algorithm>

AliensManager::AliensManager()
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

void AliensManager::Update()
{
    for (Alien *alien : alienList)
    {
        alien->Update();
    }
}

void AliensManager::Spawn(float x, float y)
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
