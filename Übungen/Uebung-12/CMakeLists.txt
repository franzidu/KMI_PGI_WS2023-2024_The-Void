cmake_minimum_required(VERSION 3.5)

project(Uebung-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Uebung-12 main.cpp
    application.h application.cpp
    fruitbasket.h fruitbasket.cpp
    fruit.h fruit.cpp
    fruitlist.h fruitlist.cpp


)

include(GNUInstallDirs)
install(TARGETS Uebung-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
