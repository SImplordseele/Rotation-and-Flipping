#include "definition.hpp"
int main(int argc, char* argv[]) {
	if (!Init()) return -1;
	if (!LoadMedia()) return -1;
	bool quit = false;
	double angle = -45.0;
	SDL_RendererFlip flip = SDL_FLIP_NONE;
	while (!quit) {
		while (SDL_PollEvent(&g_event)) {
			if (g_event.type == SDL_QUIT) {
				quit = true;
			}
		}
		
		SDL_SetRenderDrawColor(g_screen, 255, 255, 255, 255);
		SDL_RenderClear(g_screen);
		
		g_image.render((screen_width - g_image.GetWid()) / 2, (screen_height - g_image.GetHeig()) / 2, NULL, angle, NULL, flip);
		SDL_RenderPresent(g_screen);

	}
	close();
	return 0;
}