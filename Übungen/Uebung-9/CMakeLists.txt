cmake_minimum_required(VERSION 3.5)

project(Uebung-9 LANGUAGES C)

add_executable(Uebung-9 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
