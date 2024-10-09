//
// Extensions in Strobe!.
//


// Function to enable extensions in Strobe
void enable_extensions() {
    // Enable extensions in Strobe
    strobe_enable_extensions();
}

// Function to disable extensions in Strobe
void disable_extensions() {
    // Disable extensions in Strobe
    strobe_disable_extensions();
}

// Function to check if a specific extension is enabled in Strobe
bool is_extension_enabled(const char* extension_name) {
    // Check if a specific extension is enabled in Strobe
    return strobe_is_extension_enabled(extension_name);
}

// Function to check if a specific extension is supported in Strobe
bool is_extension_supported(const char* extension_name) {
    // Check if a specific extension is supported in Strobe
    return strobe_is_extension_supported(extension_name);
}

// Function to get the version of a specific extension in Strobe
const char* get_extension_version(const char* extension_name) {
    // Get the version of a specific extension in Strobe
    return strobe_get_extension_version(extension_name);
}

// Function to get the supported extensions in Strobe
const char* get_supported_extensions() {
    // Get the supported extensions in Strobe
    return strobe_get_supported_extensions();
}

// Function to get the enabled extensions in Strobe
const char* get_enabled_extensions() {
    // Get the enabled extensions in Strobe
    return strobe_get_enabled_extensions();
}

// Function to get the disabled extensions in Strobe
const char* get_disabled_extensions() {
    // Get the disabled extensions in Strobe
    return strobe_get_disabled_extensions();
}

// Function to reload the extension configuration in Strobe
void reload_extension_configuration() {
    // Reload the extension configuration in Strobe
    strobe_reload_extension_configuration();
}

// Function to add a new extension to Strobe
void add_extension(const char* extension_name) {
    // Add a new extension to Strobe
    strobe_add_extension(extension_name);
}

// Function to remove an existing extension from Strobe
void remove_extension(const char* extension_name) {
    // Remove an existing extension from Strobe
    strobe_remove_extension(extension_name);
}

// Function to enable a specific extension in Strobe
void enable_extension(const char* extension_name) {
    // Enable a specific extension in Strobe
    strobe_enable_extension(extension_name);
}

// Function to disable a specific extension in Strobe
void disable_extension(const char* extension_name) {
    // Disable a specific extension in Strobe
    strobe_disable_extension(extension_name);
}

// Function to check if a specific extension is loaded in Strobe
bool is_extension_loaded(const char* extension_name) {
    // Check if a specific extension is loaded in Strobe
    return strobe_is_extension_loaded(extension_name);
}

// Function to get the supported manifest of a specific extension in Strobe
const char* get_extension_manifest(const char* extension_name) {
    // Get the supported manifest of a specific extension in Strobe
    return strobe_get_extension_manifest(extension_name);
}

// Function to get the supported permissions of a specific extension in Strobe
const char* get_extension_permissions(const char* extension_name) {
    // Get the supported permissions of a specific extension in Strobe
    return strobe_get_extension_permissions(extension_name);
}

// Function to get the supported URLs of a specific extension in Strobe
const char* get_extension_urls(const char* extension_name) {
    // Get the supported URLs of a specific extension in Strobe
    return strobe_get_extension_urls(extension_name);
}

// Function to get the supported file types of a specific extension in Strobe
const char* get_extension_file_types(const char* extension_name) {
    // Get the supported file types of a specific extension in Strobe
    return strobe_get_extension_file_types(extension_name);
}

// Function to get the supported actions of a specific extension in Strobe
const char* get_extension_actions(const char* extension_name) {
    // Get the supported actions of a specific extension in Strobe
    return strobe_get_extension_actions(extension_name);
}

// Function to get the supported commands of a specific extension in Strobe