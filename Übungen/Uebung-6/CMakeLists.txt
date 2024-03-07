cmake_minimum_required(VERSION 3.5)

project(Uebung-6 LANGUAGES C)

add_executable(Uebung-6 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
