cmake_minimum_required(VERSION 3.5)

project(Uebung-5 LANGUAGES C)

add_executable(Uebung-5 main.c)

include(GNUInstallDirs)
install(TARGETS Uebung-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
