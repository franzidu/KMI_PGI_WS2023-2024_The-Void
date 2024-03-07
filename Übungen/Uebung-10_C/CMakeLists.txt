cmake_minimum_required(VERSION 3.5)

project(Uebung-10_C LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Uebung-10_C main.cpp
    fruitbasket.h fruitbasket.cpp
)

include(GNUInstallDirs)
install(TARGETS Uebung-10_C
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
