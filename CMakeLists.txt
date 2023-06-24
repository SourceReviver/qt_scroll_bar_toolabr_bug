cmake_minimum_required(VERSION 3.26)
project(qScrollBar_bug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Widgets
        REQUIRED)

add_executable(qScrollBar_bug main.cpp mwindow.cpp mwindow.h)
target_link_libraries(qScrollBar_bug
        Qt::Core
        Qt6::Widgets
        )

