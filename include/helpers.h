#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <cstdlib>

inline constexpr const char* TITLE = "Project template";
inline constexpr int WIDTH = 800;
inline constexpr int HEIGHT = 600;

// setup
void initAndSetupWindow();
void checkForWindowError(GLFWwindow *window);
void checkForGladError(GLFWwindow *window);
void manageViewport(GLFWwindow *window);

// callbacks 
void framebuffer_size_callback(GLFWwindow *window, int width, int height);

// input
void processInput(GLFWwindow *window);

// error management
GLenum glCheckError_(const char* file, int line);
#define glCheckError() glCheckError_(__FILE__, __LINE__)

void APIENTRY glDebugOutput(GLenum source, GLenum type, unsigned int id,
                            GLenum severity, GLsizei length,
                            const char* message, const void* userParam);
