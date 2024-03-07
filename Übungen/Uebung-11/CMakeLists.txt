cmake_minimum_required(VERSION 3.5)

project(Uebung-11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Uebung-11 main.cpp
    application.h application.cpp
    fruitbasket.h fruitbasket.cpp
    apple.h apple.cpp)

include(GNUInstallDirs)
install(TARGETS Uebung-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
