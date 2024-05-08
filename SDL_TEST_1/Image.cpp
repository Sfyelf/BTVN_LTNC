
#include "Image.hpp"
#include "TextureManager.hpp"

Image::Image(const char* texturesheet, int x, int y)
{

    objTexture = TextureManager::LoadTexture(texturesheet);

    xpos = x;
    ypos = y;

}

Image::~Image()
{
    SDL_DestroyTexture(objTexture);
}

void Image::Render()
{
    int w, h;
    if (SDL_QueryTexture(objTexture, NULL, NULL, &w, &h) != 0)
    {
        printf("Error: Texture null");
    }

    SDL_Rect drect = {xpos, ypos, w, h};
    SDL_Rect srcrect = {0, 0, w, h};

    SDL_RenderCopy(Game::renderer, objTexture, &srcrect, &drect);
}
