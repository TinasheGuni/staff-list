cmake_minimum_required(VERSION 3.14)

project(reflective_programming LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(reflective_programming
  main.cpp
  filewriter.h filewriter.cpp
  staffdetails.h staffdetails.cpp
  staffdetailsgui.h staffdetailsgui.cpp
  stafflist.h stafflist.cpp
  stafflistwriter.h stafflistwriter.cpp

)
target_link_libraries(reflective_programming Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS reflective_programming
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
