cmake_minimum_required(VERSION 3.30)
project(prog_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(prog_2 main.cpp
        Content.cpp
        Content.h
        Article.cpp
        Article.h
        Comment.cpp
        Comment.h
        User.cpp
        User.h
        NewsPortal.cpp
        NewsPortal.h)
