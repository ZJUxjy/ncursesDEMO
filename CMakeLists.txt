cmake_minimum_required(VERSION 3.0)

project(ncurses_program)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(basics)
add_subdirectory(menus)
add_subdirectory(JustForFun)
add_subdirectory(panels)
add_subdirectory(forms)
# ncurses