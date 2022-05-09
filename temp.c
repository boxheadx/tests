#include <SDL2/SDL.h>

int main ()
{
    SDL_Window* window=NULL;
    window=SDL_CreateWindow
    (
        "test", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0
    );

    SDL_Renderer* renderer=NULL;
    renderer =  SDL_CreateRenderer(window,-1,0);

    SDL_SetRenderDrawColor(renderer,255,0,0,255);

    SDL_RenderClear(renderer);

    SDL_Rect r;
    r.x=50;
    r.y=50;
    r.w=50;
    r.h=50;

    SDL_SetRenderDrawColor(renderer,0,0,255,255);

    SDL_RenderFillRect(renderer,&r);

    SDL_RenderPresent(renderer);

    SDL_Delay(5000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}