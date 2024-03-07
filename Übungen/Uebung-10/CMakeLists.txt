cmake_minimum_required(VERSION 3.5)

project(Uebung-10 LANGUAGES C)

add_executable(Uebung-10 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
