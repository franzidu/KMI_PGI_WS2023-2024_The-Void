cmake_minimum_required(VERSION 3.5)

project(Uebung-7 LANGUAGES C)

add_executable(Uebung-7 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
