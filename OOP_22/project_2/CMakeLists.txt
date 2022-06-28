cmake_minimum_required(VERSION 3.22)
project(project_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(project_2 main.cpp Database/Database.h Table/Table.h Table/Table.cpp Database/Database.cpp Column/ColumnType.h Column/Column.cpp Column/Column.h)
