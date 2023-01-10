#include "Texture.hpp"

SDL_Texture *Texture::loadTexture(const char *tex) {
    SDL_Surface *tempSurface = IMG_Load(tex);
    SDL_Texture *texture =
        SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    return texture;
}

void Texture::Draw(SDL_Texture *texture, SDL_Rect src, SDL_Rect dst) {
    SDL_RenderCopy(Game::renderer, texture, &src, &dst);
}
