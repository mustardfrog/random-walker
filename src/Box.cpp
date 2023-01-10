#include "Box.hpp"
#include <cstdlib>

Box::Box() {
    m_ball.h = 4.0f;
    m_ball.w = 4.0f;
    m_ball.x = 400.0f;
    m_ball.y = 400.0f;

    m_move = 4;
};

Box::~Box(){};

void Box::update() {
    int r = rand()%4;
    // switch statement doesn't work with abave method
    // it tends to go one direction diagonally

    if (r == 1)
            m_ball.x -= m_move;
    if (r == 2)
            m_ball.y -= m_move;
    if (r == 3)
            m_ball.x += m_move;
    if (r == 0)
            m_ball.y += m_move;
}

void Box::render(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 10);
    SDL_RenderDrawRect(renderer, &m_ball);

    SDL_RenderFillRect(renderer, &m_ball);
}
