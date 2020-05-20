#define SDL_MAIN_HANDLED

#include "./Constants.h"
#include "./Game.h"

int main(int argc, char *argv[]) {

    SDL_SetMainReady();

    Game *game = new Game();

    game->Initialize(WINDOW_WIDTH, WINDOW_HEIGHT);

    while (game->IsRunning()) 
    {
        game->ProcessInput();
        game->Update();
        game->Render();
    }

    game->Destroy();

    return 0;
}
