#include <SDL2/SDL.h>

int main()
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNEFINED, 640, 480, 0);

	SDL_Event event;
	bool running = true;
	while (running)
	{
		while (SDL_PollEvent(&event)) 
		{
			if(event.type == SDL_QUIT)
			{
				running = false;
			}
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
