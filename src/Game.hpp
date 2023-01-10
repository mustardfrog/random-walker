#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_video.h>
#include <cstdio>

class Game {
  public:
    static SDL_Renderer *renderer;

    Game();
    ~Game();

    void init();
    void handleEvent();
    void update();
    void render();
    void clean();
    bool running() { return m_IsRunning; };

  private:
    bool m_IsRunning = false;
    SDL_Window *m_Window;
};
