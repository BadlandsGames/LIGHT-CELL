#include "VulkanApp.h"
#include "InputManager.h"
#include "Scene.h"
#include "VRManager.h"

int main() {
    VulkanApp app;
    if (!app.initialize()) return -1;

    InputManager input;
    Scene scene;
    VRManager vr;

    while (!app.shouldClose()) {
        input.pollEvents();
        vr.update();
        scene.update();
        app.render(scene);
    }

    app.cleanup();
    return 0;
}