#pragma once
#include <vulkan/vulkan.h>

class VulkanApp {
public:
    bool initialize();
    void render(class Scene& scene);
    void cleanup();
    bool shouldClose();

private:
    void initVulkan();
    void createSwapChain();
    void createRenderPass();
    void createFramebuffers();
    void createCommandBuffers();
    void drawFrame();

    // Vulkan handles
    VkInstance instance;
    VkDevice device;
    VkSwapchainKHR swapChain;
    // ... other Vulkan objects
};