cmake_minimum_required(VERSION 3.10.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/rongsheng-w/CC"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量设置
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
# linux exe and dll output path
# windows: cmake_runtime_output_directory

set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)

