cmake_minimum_required(VERSION 3.23)
project(project)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(project main.cpp)

target_sources(
    project
    PRIVATE 
      vendor/glad/src/glad.c
      helpers.cpp
      shader_class.cpp
      camera_class.cpp
    
    PUBLIC
      helpers.h
      shader_class.h
      camera_class.h
)

target_include_directories(project
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/include
      ${CMAKE_CURRENT_SOURCE_DIR}/vendor
)

target_link_libraries(project
    PRIVATE
      glfw
      OpenGL::GL
)
