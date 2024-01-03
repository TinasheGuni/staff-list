cmake_minimum_required(VERSION 3.14)

project(staff_details LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(staff_details
  main.cpp
  staffdetails.h staffdetails.cpp
  staffdetailsgui.h staffdetailsgui.cpp
  stafflist.h stafflist.cpp
  stafflistwriter.h stafflistwriter.cpp
  filewriter.h filewriter.cpp
)
target_link_libraries(staff_details Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS staff_details
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
