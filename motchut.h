#ifndef MOTCHUT_H_INCLUDED
#define MOTCHUT_H_INCLUDED
#include <vector>
#include "SDL.h"
#include "SDL_image.h"
#include<bits/stdc++.h>

class Game
{

public:

    Game();
    void Run();
    int GetScore();
    int GetSize();

private:

    bool running = false;
    bool alive = false;
    int fps = 0;

    static const int FRAME_RATE     = 1000 / 60;
    static const int SCREEN_WIDTH   = 720;
    static const int SCREEN_HEIGHT  = 720;
    static const int GRID_WIDTH     = 32;
    static const int GRID_HEIGHT    = 32;

    SDL_Window * window = nullptr;
    SDL_Renderer * renderer = nullptr;

    enum class Block { head, body, food, empty };
    enum class Move { up, down, left, right };

    Move last_dir = Move::up;
    Move dir = Move::up;

    struct { float x = GRID_WIDTH / 2, y = GRID_HEIGHT / 2; } pos;

    SDL_Point head = { static_cast<int>(pos.x), static_cast<int>(pos.y) };//ép kiểu nguyueen cho biến
    SDL_Point food;
    std::vector<SDL_Point> body;

    Block grid[GRID_WIDTH][GRID_HEIGHT];

    float speed = 0.2f;
    int growing = 0;
    int score = 0;
    int size = 1;

    void ReplaceFood();
    void GrowBody(int quantity);
    void UpdateWindowTitle();
    void GameLoop();
    void Render();
    void Update();
    void PollEvents();
    void Close();
    /////

};

#endif // MOTCHUT_H_INCLUDED
