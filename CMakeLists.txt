project(QtGuiOnly)
cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0020 NEW)

aux_source_directory(. SRC_LIST)

include_directories(.)

add_executable(${PROJECT_NAME} ${SRC_LIST})

#if (NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE Debug)
#endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake_modules/")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra") # Warnings
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fms-extensions -g") # features


FILE(GLOB src *)

file(GLOB_RECURSE QT_UI_FILES *.ui)

# Qt
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)
find_package(Qt5Widgets)
find_package(Qt5Gui)
find_package(Qt5OpenGL)

find_package(OpenGL REQUIRED) # OpenGL

include_directories(
        ${Qt5Core_INCLUDE_DIRS}
        ${Qt5Widgets_INCLUDE_DIRS}
        ${Qt5Gui_INCLUDE_DIRS}
        ${Qt5OpenGL_INCLUDE_DIRS}

        ${CMAKE_CURRENT_BINARY_DIR}
        .
)

if(Qt5_POSITION_INDEPENDENT_CODE)
  set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

qt5_wrap_ui(UI_HEADER_FILES ${QT_UI_FILES})
message("QT_UI_FILES: ${QT_UI_FILES}")

set(QT_USE_OPENGL TRUE)

ADD_DEFINITIONS(${QT_DEFINITIONS})

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Gui Qt5::OpenGL)


