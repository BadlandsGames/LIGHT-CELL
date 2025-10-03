#pragma once

class InputManager {
public:
    void pollEvents();
    bool isKeyPressed(int key);
};