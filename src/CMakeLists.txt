set(core_headers
    fluentui/core/colors.h
)

set(core_sources
)

set(fluentui_qt_HEADERS
    ${core_headers}
)

set(fluentui_qt_SOURCES
    ${core_sources}
)

if(NOT DEFINED Qt5_DIR)
    message(STATUS "Qt5_DIR not defined. Attempting auto-discovery...")

    # Windows 示例路径（MSVC）
    list(APPEND CMAKE_PREFIX_PATH "D:/tools/Qt/Qt5.15.16/msvc2022_64/")

    # # Linux 示例路径
    # list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/Qt/6.9.0/gcc_64")
    # list(APPEND CMAKE_PREFIX_PATH "/opt/Qt/6.9.0/gcc_64")

    # # macOS 示例路径
    # list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/Qt/6.9.0/clang_64")
    # list(APPEND CMAKE_PREFIX_PATH "/Applications/Qt/6.9.0/clang_64")
endif()

find_package(Qt5 REQUIRED COMPONENTS
    Core
    Gui
    Widgets
)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(Qt_VERSION ${Qt5_VERSION} CACHE STRING "Qt5 version" FORCE)


# Windows resource.  With some additional work to clean it up, it
# might be possible to use with Cygwin and MinGW.
if(MSVC)
        configure_file(
                "${CMAKE_CURRENT_SOURCE_DIR}/fluentui/resources/version.rc.cmake.in"
                "${CMAKE_CURRENT_BINARY_DIR}/fluentui/resources/version.rc"
                @ONLY)
        list(APPEND fluentui_qt_RESOURCES
                "${CMAKE_CURRENT_BINARY_DIR}/fluentui/resources/version.rc")
endif()

# Definitions required for building
add_definitions(
        -DFLUENTUI_BUILDING_LIBRARY=1
)

# Search the project binary dir for config.h
include_directories(
    ${PROJECT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(fluentui-qt-headers SOURCES ${fluentui_qt_HEADERS})

add_library(Qt6Fluent
    ${fluentui_qt_SOURCES}
    ${fluentui_qt_RESOURCES})

target_link_libraries(Qt6Fluent PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

set_target_properties(${TARGET_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

if(MSVC)
    target_compile_definitions(Qt6Fluent PRIVATE
            "FLUENTUI_DLL_NAME=\"$<TARGET_FILE_NAME:Qt6Fluent>\\0\"")
    set_target_properties(Qt6Fluent PROPERTIES DEBUG_POSTFIX "D")
endif()