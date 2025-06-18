
set(gallery_sources
    gallery/main.cpp
    gallery/Gallery.cpp
    gallery/Gallery.h
    gallery/badge/BadgeDefault.h
    gallery/badge/BadgeSample.h
    gallery/badge/BadgeSample.cpp
    gallery/ui/GalleryFrame.h
    gallery/ui/GalleryFrame.cpp
    gallery/ui/GalleryFrame.ui
)

list(APPEND CMAKE_PREFIX_PATH "/Applications/Qt/6.9.1/macos")

if(NOT DEFINED Qt6_DIR)
    message(STATUS "Qt6_DIR not defined. Attempting auto-discovery...")

    # Windows
    if(MSVC)
        list(APPEND CMAKE_PREFIX_PATH "D:\\tools\\Qt\\Qt6.9.0\\6.9.0\\msvc2022_64")
    elseif(LINUX)
    # # Linux 示例路径
    # list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/Qt/6.9.0/gcc_64")
    # list(APPEND CMAKE_PREFIX_PATH "/opt/Qt/6.9.0/gcc_64")
    elseif(APPLE)
    # # macOS 示例路径
        list(APPEND CMAKE_PREFIX_PATH "/Applications/Qt/6.9.1/macos")
    endif()
endif()

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# Search the project binary dir for config.h
include_directories(
        ${PROJECT_BINARY_DIR}
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_BINARY_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(gallery ${gallery_sources})
target_link_libraries(gallery PRIVATE
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        Qt6Fluent
)
