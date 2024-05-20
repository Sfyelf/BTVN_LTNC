
#include "Game.hpp"
#include "Input.hpp"
#include "TextureManager.hpp"
#include "Image.hpp"
#include "Ship.hpp"
#include "Aliens.hpp"
#include "AliensManager.hpp"

SDL_Renderer* Game::renderer = nullptr;

//Manager manager;
//auto& newShip(manager.addEntity());

bool Game::gameEnd = 0;

Game::Game()
{}
Game::~Game()
{}

Ship* ship = nullptr;
AliensManager* alienManager = nullptr;

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



//    newShip.addComponent<PositionComponent>();
    return true;
}

void Game::createMenu()
{
    menuTexture = TextureManager::LoadTexture("graphics/exp4.png");
    std::cout << "Menu created! \n";
}

void Game::createGame()
{
    backgroundTexture = TextureManager::LoadTexture("graphics/bg.png");
    std::cout << "Background loaded! \n";

    ship = new Ship();
    alienManager = new AliensManager();
//    alienManager->Spawn(10, 10);
    alienManager->SpawnWave(50, 50, 8, 6, 90, 50);

    //bullet = new Bullet(5, 10);
}

void Game::update()
{
    Input::Update();

    if (gameEnd == 0)
    {
        if (gameStart == 0)
        {
            if (Input::GetKey(SDL_SCANCODE_SPACE))
            {
                gameStart = 1;
                Game::createGame();
            }
        }
        else
        {
            ship->HandleInput();
            ship->HandleMove();
            ship->UpdateBullet();
            alienManager->Update();
        }

    }
    else
    {
        if (continueGame) resetGame();
    }


}

void Game::render()
{
    SDL_RenderClear(renderer);

    //bg
    SDL_RenderCopy(renderer, backgroundTexture, NULL, NULL);

    if (gameEnd == 0)
    {
        if (gameStart == 1)
        {
            ship->Render();
            alienManager->Render();
        }
    }
    else
    {
        continueGame = 1;
    }



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

void Game::clearGame() {
    // Clean up dynamically allocated objects
    delete ship;
    delete alienManager;
    ship = nullptr;
    alienManager = nullptr;

    // Clear the screen
}

void Game::resetGame() {
    // Reinitialize game objects
    createGame();
    continueGame = 0;
    gameEnd = 0;
}
