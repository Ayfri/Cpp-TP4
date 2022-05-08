cmake_minimum_required(VERSION 3.22)
project(TP4)

set(CMAKE_CXX_STANDARD 20)

set(SDL2_PATH ${PROJECT_SOURCE_DIR}/libs/SDL-Menu)
set(SDL2_INCLUDE_DIR ${SDL2_PATH}/include/SDL2)
set(SDL2_LIB_DIR ${SDL2_PATH}/lib/SDL2)

include_directories(${SDL2_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR})

file(GLOB_RECURSE SDL_MENU_SOURCES
	${SDL2_PATH}/src/*.cpp
	${SDL2_PATH}/src/*.h
	)

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src
)

file(GLOB_RECURSE SOURCES
	${PROJECT_SOURCE_DIR}/include/*.hpp
	${PROJECT_SOURCE_DIR}/src/*.cpp
	)

list(REMOVE_ITEM SDL_MENU_SOURCES ${SDL2_PATH}/src/main.cpp)

add_executable(${PROJECT_NAME} ${SOURCES} ${SDL_MENU_SOURCES})
target_link_libraries(${PROJECT_NAME} mingw32 SDL2main SDL2 SDL2_image)
