set(core_headers
)

set(core_sources
)

set(components_headers
    fluentui/components/Badge.h
)

set(components_sources
    fluentui/components/Badge.cpp
)

set(styles_headers
    fluentui/styles/Style.h
    # fluentui/styles/ThemeManager.h
)

set(styles_sources
    # fluentui/styles/Style.cpp
    # fluentui/styles/ThemeManager.cpp
)

set(fluentui_qt_HEADERS
    ${core_headers}
    ${styles_headers}
    ${components_headers}
)

set(fluentui_qt_SOURCES
    ${core_sources}
    ${styles_sources}
    ${components_sources}
)

# if(NOT DEFINED Qt6_DIR)
#     message(STATUS "Qt6_DIR not defined. Attempting auto-discovery...")

#         if(MSVC)
#                 # Windows 示例路径（MSVC）
#                 list(APPEND CMAKE_PREFIX_PATH "D:\\tools\\Qt\\Qt6.9.0\\6.9.0\\msvc2022_64")
#         elseif(UNIX)
#                 # # Linux 示例路径
#                 # list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/Qt/6.9.0/gcc_64")
#                 # list(APPEND CMAKE_PREFIX_PATH "/opt/Qt/6.9.0/gcc_64")
#         elseif(APPLE)
#                 # # macOS 示例路径
#                 list(APPEND CMAKE_PREFIX_PATH "/Users/bin/Applications/Qt/6.9.0/macos/lib/cmake")
#         endif()
# endif()

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Gui Widgets Svg)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
    Core
    Gui
    Widgets
    Svg
)
qt_standard_project_setup()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(Qt_VERSION ${Qt6_VERSION} CACHE STRING "Qt6 version" FORCE)

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

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/fluentui/fluentui_autoconf_config.h.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/fluentui/fluentui_autoconf_config.h
    @ONLY)

configure_file(
    ${CMAKE_CURRENT_LIST_DIR}/fluentui/fluentui_version.h.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/fluentui/fluentui_version.h
    @ONLY)

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
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Svg
)

set_target_properties(${TARGET_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

if(MSVC)
    target_compile_definitions(Qt6Fluent PRIVATE
            "FLUENTUI_DLL_NAME=\"$<TARGET_FILE_NAME:Qt6Fluent>\\0\"")
    set_target_properties(Qt6Fluent PROPERTIES DEBUG_POSTFIX "D")
elseif(UNIX)
    # For strict libtool compatibility on Unix.  It's a horrible hack to
    # set the version in the filename, and create the symlink at install
    # time.  Note: could be dropped when the SONAME is updated and
    # libtool compatibility is no longer required.
    if(BUILD_SHARED_LIBS)
        set_target_properties(Qt6Fluent PROPERTIES
            VERSION "${INTERFACE_VERSION_D}"
        )
        install(TARGETS Qt6Fluent LIBRARY DESTINATION lib)
    endif()
else()
    # Not used for the common cases, though this would be the default if
    # not for libtool compatibility.
    set_target_properties(Qt6Fluent PROPERTIES VERSION ${INTERFACE_VERSION_D})
    if(NOT CYGWIN)
            set_target_properties(Qt6Fluent PROPERTIES VERSION
                    ${INTERFACE_VERSION_D})
    endif()
endif()