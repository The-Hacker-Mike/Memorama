cmake_minimum_required(VERSION 3.15)
project(memorama_Game)

set(CMAKE_CXX_STANDARD 14)

add_executable(memorama_Game main.cpp Card.h Card.cpp Gameboard.h Player.h Gameboard.cpp gPlayer.h)