# set minimum version required of cmake
cmake_minimum_required(VERSION 3.1)

# set project name and lang
project(DoublyCircularLinkedListGame
        LANGUAGES CXX)

# set name of executable
SET(EXEC main)

# get header files
file(GLOB HEADERS CONFIGURE_DEPENDS *.h)

# get implementation files (.cpp)
file(GLOB SOURCES CONFIGURE_DEPENDS *.cpp)

# compile and generate executable
add_executable(${EXEC} ${HEADERS} ${SOURCES})