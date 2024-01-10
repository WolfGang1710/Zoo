cmake_minimum_required(VERSION 3.27)
project(Zoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Zoo main.cpp
        Animal.cpp
        headers/Animal.h
        headers/Animal.h
        Mammal.cpp
        headers/Mammal.h
        Bird.cpp
        headers/Bird.h
        Reptile.cpp
        headers/Reptile.h)
