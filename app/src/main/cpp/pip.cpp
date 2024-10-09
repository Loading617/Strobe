//
// PiP (Picture in Picture) in Strobe.
//

#include "picture in picture in browser strobe"

#include "android.h"


// Function to initialize the Picture in Picture (PiP) in the browser

void init_picture_in_picture_in_browser();

void init_picture_in_picture_in_browser() {
    // Initialize the PiP feature in the browser
    picture_in_picture_init();
}

// Function to start capturing the user's screen for PiP'

void start_capturing_screen_for_pip();

void start_capturing_screen_for_pip() {
    // Start capturing the user's screen for PiP' using the browser API
    picture_in_picture_start_capturing_screen();
}

// Function to stop capturing the user's screen for PiP'

void stop_capturing_screen_for_pip();

void stop_capturing_screen_for_pip() {
    // Stop capturing the user's screen for PiP' using the browser API
    picture_in_picture_stop_capturing_screen();
}

// Function to check if PiP' is currently active'

bool is_pip_active();

bool is_pip_active() {
    // Check if PiP' is currently active' using the browser API
    return picture_in_picture_is_active();
}

// Function to close the PiP' window'

void close_pip_window();

void close_pip_window() {
    // Close the PiP' window' using the browser API
    picture_in_picture_close_window();
}

// Function to adjust the size and position of the PiP' window'

void adjust_pip_window_size_and_position(int width, int height, int x, int y);

void adjust_pip_window_size_and_position(int width, int height, int x, int y) {
    // Adjust the size and position of the PiP' window' using the browser API
    picture_in_picture_adjust_window_size_and_position(width, height, x, y);
}