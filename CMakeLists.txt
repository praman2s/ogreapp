project(OgreApp CXX C)
cmake_minimum_required(VERSION 2.8)


# Include path for additional CMake library finding scripts
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
# We want the binaries to be easily accessible
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})


find_package(OGRE REQUIRED)
include_directories(${OGRE_INCLUDE_DIRS}) 
link_directories(${OGRE_LIBRARY_DIRS})

add_executable(ogreapp src/ogreapp.cpp)
link_libraries(ogreapp SDL SDL_image)