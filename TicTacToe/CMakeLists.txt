cmake_minimum_required(VERSION 3.17)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TicTacToe
        main.cpp
        player.cpp
        player.h
        tictactoe.cpp
        tictactoe.h
        tictactoe_test.h board.cpp board.h)
