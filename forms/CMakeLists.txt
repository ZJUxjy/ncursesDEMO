cmake_minimum_required(VERSION 3.0)

file(GLOB
SRC_FILES 
${CMAKE_CURRENT_SOURCE_DIR}/*.c
${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(SRC_FILE_NAME ${SRC_FILE} NAME)
    message(STATUS "SRC_FILE_NAME: ${SRC_FILE_NAME}")
    get_filename_component(SRC_FILE_NAME_WE ${SRC_FILE} NAME_WE)
    message(STATUS "SRC_FILE_NAME_WE: ${SRC_FILE_NAME_WE}")
    get_filename_component(SRC_FILE_EXT ${SRC_FILE} EXT)
    message(STATUS "SRC_FILE_EXT: ${SRC_FILE_EXT}")
    add_executable(${SRC_FILE_NAME_WE} ${SRC_FILE})
    target_link_libraries(
        ${SRC_FILE_NAME_WE}

        ncurses
        form
    )
endforeach(SRC_FILE ${SRC_FILES})


# set(SOURCE_FILES main.cpp)
# ncurses