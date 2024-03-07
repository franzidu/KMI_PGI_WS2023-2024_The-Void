cmake_minimum_required(VERSION 3.5)

project(Uebung-8 LANGUAGES C)

add_executable(Uebung-8 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
