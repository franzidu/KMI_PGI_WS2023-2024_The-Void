cmake_minimum_required(VERSION 3.5)

project(ascii LANGUAGES C)

add_executable(ascii main.c)

include(GNUInstallDirs)
install(TARGETS ascii
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
