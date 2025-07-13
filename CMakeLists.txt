cmake_minimum_required(VERSION 3.10)

project(ThreeBodyProblem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/canvas.cpp
    src/cisim.cpp  
    src/ekozellikler.cpp
    src/etkilesim.cpp
    src/main.cpp
    src/roket.cpp
    src/vektor.cpp
    src/cisimKontrol.cpp
    src/roketKontrol.cpp
)

add_executable(ThreeBodyProblem ${SOURCES})
