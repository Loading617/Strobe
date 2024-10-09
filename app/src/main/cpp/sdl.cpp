//
// Controller SDL Support for Strobe.
//

#include <SDL.h>

#include "controller_sdl_support in strobe"


// Function to initialize SDL controller support in Strobe

void init_controller_sdl_support_in_strobe() {
    // Initialize SDL controller support
    SDL_Init(SDL_INIT_GAMECONTROLLER);
}

// Function to handle controller input in Strobe

void handle_controller_input_in_strobe() {
    // Check for controller input events
    if (SDL_NumJoysticks() > 0) {
        // Get controller input values
        SDL_GameController* controller = SDL_GameControllerOpen(0);
        if (controller) {
            // Process controller input
            int left_x = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX);
            int left_y = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY);
            int right_x = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTX);
            int right_y = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTY);
            int button_a = SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_A);
            int button_b = SDL_GameController