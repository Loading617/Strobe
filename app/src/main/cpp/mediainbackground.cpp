//
// Media in Background with Strobe.
//

#include "play media in background with strobe tv browser"

#include "android.h"

void init_media_in_background_with_strobe() {
    // Initialize the Strobe TV browser
    strobe_tv_browser_init();
}

void play_media_in_background(const char* url) {
    // Play the media in the background using the Strobe TV browser
    strobe_tv_browser_play_media(url);
}

void stop_media_in_background() {
    // Stop the media playback in the background using the Strobe TV browser
    strobe_tv_browser_stop_media();
}

void pause_media_in_background() {
    // Pause the media playback in the background using the Strobe TV browser
    strobe_tv_browser_pause_media();
}

void resume_media_in_background() {
    // Resume the media playback in the background using the Strobe TV browser
    strobe_tv_browser_resume_media();
}