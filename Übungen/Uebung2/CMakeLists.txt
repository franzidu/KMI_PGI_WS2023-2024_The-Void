cmake_minimum_required(VERSION 3.5)

project(Uebung2 LANGUAGES C)

add_executable(Uebung2 main.c

    ../../../../../Library/CloudStorage/OneDrive-stud.h-da.de/KMI/Programmieren 1/Übungen/Uebung_02-week_day.c)

include(GNUInstallDirs)
install(TARGETS Uebung2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
