project(hlslparser)
cmake_minimum_required(VERSION 2.8)

option(BUILD_STANDALONE "Build standalone programs" OFF)

aux_source_directory(src SRC_LIST)
aux_source_directory(src/Engine SRC_LIST)
list(REMOVE_ITEM SRC_LIST "src/Main.cpp")

add_library(${PROJECT_NAME} ${SRC_LIST})

if (BUILD_STANDALONE)
	add_executable(${PROJECT_NAME}-compiler ${SRC_LIST} "src/Main.cpp")
endif(BUILD_STANDALONE)

