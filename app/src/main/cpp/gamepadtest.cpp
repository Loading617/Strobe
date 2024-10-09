//
// Test your Gamepad with Strobe.
//

#include "test gamepad"

#include <SDL.h>
#include "gamepad.h"

int main(int argc, char* argv[]) {
    // Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    // Initialize gamepad
    init_gamepad();

    // Main loop
    while (true) {
        // Handle gamepad input
        handle_gamepad_input();

        // Process gamepad input values for Strobe
        process_gamepad_input(left_x, left_y, right_x, right_y);

        // Update Strobe parameters based on gamepad input values
        // Example: Strobe_set_parameter(STROBE_PARAM_FOV, left_y);

        // Render Strobe
        // Example: strobe_render();

        // Handle SDL events
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QU