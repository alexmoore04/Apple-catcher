// =======================================================
// SDL Example
// David Dorrington UoBGames, Feb 2022
// =======================================================
// Libraries to include
#include <SDL.h>
#include <stdio.h>
#include <iostream>
using namespace std;
// =======================================================
int main(int argc, char* args[])
{
	printf("SDL test");
	SDL_Window* gameWindow = NULL;
	//Create window
	gameWindow = SDL_CreateWindow("David's - SDL Test",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	if (gameWindow == NULL) printf(" Window Error %s\n", SDL_GetError());
	SDL_Delay(5000);
	SDL_Quit;
	return 0;
}
