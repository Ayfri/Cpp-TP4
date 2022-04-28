cmake_minimum_required(VERSION 3.21)
project(TP3)

set(CMAKE_CXX_STANDARD 20)

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src
)

file(GLOB_RECURSE SOURCES
	"${PROJECT_SOURCE_DIR}/include/*.h"
	"${PROJECT_SOURCE_DIR}/include/*.hpp"
	"${PROJECT_SOURCE_DIR}/src/*.cpp"
	"${PROJECT_SOURCE_DIR}/src/*.c"
	)
add_executable(PROJECT_NAME ${SOURCES})