cmake_minimum_required (VERSION 2.6)

project (tabmo-coding-challenge)

add_subdirectory(third-party/drogon-1.0.0)

add_executable(tabmo-coding-challenge 
		src/main.cpp
		src/hello_world_api.cpp
		src/hello_world_api.h
)

target_link_libraries(tabmo-coding-challenge PRIVATE drogon)

