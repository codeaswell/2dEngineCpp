#ifndef __GAME_H
#define __GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Game
{
    private:
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer *renderer;
        int ticksLastFrame = 0;
        
    public:
        Game();
        ~Game();
        void Initialize(int width, int height);
        bool IsRunning() const;
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();
};

#endif