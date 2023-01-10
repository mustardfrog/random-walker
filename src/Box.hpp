#pragma once
#include <SDL2/SDL.h>

// example file
class Box {

  public:
    Box();
    ~Box();

    void update();
    void render(SDL_Renderer *renderer);

  private:
    SDL_Rect m_ball;
    int m_move;
};
