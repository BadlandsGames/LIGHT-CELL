#pragma once

class Scene {
public:
    void load();
    void unload();
    void update();
    void draw(); // Called by VulkanApp
};