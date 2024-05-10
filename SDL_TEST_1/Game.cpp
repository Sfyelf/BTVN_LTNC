
#include "Game.hpp"
#include "Input.hpp"
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

bool Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
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
        else
        {
            return false;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            std::cout << "Renderer created!" << std::endl;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

    backgroundTexture = TextureManager::LoadTexture("graphics/bg.png");

//    newShip.addComponent<PositionComponent>();
    return true;
}

void Game::createObject()
{
    ship = new Ship();
}

void Game::update()
{
    Input::Update();

    ship->HandleInput();
    ship->HandleMove();
}

void Game::render()
{
    SDL_RenderClear(renderer);

    //bg
    SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);

    ship->Render();

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

