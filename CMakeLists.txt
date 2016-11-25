cmake_minimum_required(VERSION 3.6)
project(Reviiyot)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    cmake-build-debug/CMakeFiles/3.6.2/CompilerIdC/CMakeCCompilerId.c
    cmake-build-debug/CMakeFiles/3.6.2/CompilerIdCXX/CMakeCXXCompilerId.cpp
    cmake-build-debug/CMakeFiles/feature_tests.c
    cmake-build-debug/CMakeFiles/feature_tests.cxx
    include/Card.h
    include/Deck.h
    include/Game.h
    include/Hand.h
    include/Player.h
    src/Card.cpp
    src/Deck.cpp
    src/Game.cpp
    src/Hand.cpp
    src/main.cpp
    src/Player.cpp
    src/reviiyot.cpp)

add_executable(Reviiyot ${SOURCE_FILES})