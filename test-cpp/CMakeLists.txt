cmake_minimum_required(VERSION 3.5)

project(test-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test-cpp main.cpp
    konto.h konto.cpp)

include(GNUInstallDirs)
install(TARGETS test-cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
