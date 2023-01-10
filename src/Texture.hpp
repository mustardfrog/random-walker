#pragma once
#include "Game.hpp"

class Texture {
  public:
    static SDL_Texture *loadTexture(const char *filename);
    static void Draw(SDL_Texture *texture, SDL_Rect src, SDL_Rect dst);
};
