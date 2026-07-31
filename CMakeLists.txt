cmake_minimum_required(VERSION 3.23)
project(project)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(project 
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/helpers.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/shader_class.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/camera_class.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/src/glad.c
)

target_include_directories(project
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/include
      ${CMAKE_CURRENT_SOURCE_DIR}/vendor/glad/include
      ${CMAKE_CURRENT_SOURCE_DIR}/vendor
)

target_link_libraries(project
    PRIVATE
      glfw
      OpenGL::GL
)
