
#include "Game.hpp"
#include "TextureManager.hpp"
#include "Image.hpp"
#include "Ship.hpp"

SDL_Renderer* Game::renderer = nullptr;

//Manager manager;
//auto& newShip(manager.addEntity());

Game::Game()
{}
Game::~Game()
{}

Ship* ship = nullptr;

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystem Initialised!..." << std::endl;

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        if (window)
        {
            std::cout << "Window created!" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "Renderer created!" << std::endl;
        }

        isRunning = 1;

    }
    else
    {
        isRunning = 0;
    }

    backgroundTexture = TextureManager::LoadTexture("graphics/bg.png");

//    newShip.addComponent<PositionComponent>();

}

void Game::createObject()
{
    ship = new Ship();
}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
        isRunning = 0;
        break;

    default:
        break;
    }
}

void Game::update()
{


}

void Game::render()
{
    SDL_RenderClear(renderer);

    //bg
    SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);

    ship->shipImage.Render();

    //where to add stuff
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    SDL_DestroyTexture(backgroundTexture);

    std::cout << "Game Cleaned" << std::endl;
}

