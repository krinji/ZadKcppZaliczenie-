cmake_minimum_required(VERSION 3.10)

project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/ZadKcpp.cc
    src/ZadPrzykladKlasy.cc
    src/ZadZwracanie.cc
    src/ZadOperatoryPrzypisania.cc
    src/ZadParzysta.cc
    src/ZadStruktura.cc
)

set(MAIN main.cc)

add_executable(ZadClassKcpp ${MAIN} ${SOURCES})

