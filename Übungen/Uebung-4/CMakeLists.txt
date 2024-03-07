cmake_minimum_required(VERSION 3.5)

project(Uebung-4 LANGUAGES C)

add_executable(Uebung-4 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
