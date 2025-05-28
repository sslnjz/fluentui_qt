# Run "cmake" to generate the build files for your platform
cmake_minimum_required(VERSION 3.18)

# Try C++17, then fall back to C++11 and C++98.  Used for feature tests
# for optional features.
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the output directories for binaries and libraries during the build process
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Use folders (for IDE project grouping)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Source additional modules from the "cmake" directory
list(APPEND CMAKE_MODULE_PATH
    "${CMAKE_CURRENT_LIST_DIR}/cmake")

set(FluentUI_Qt_version "0.1.0")
message(STATUS "Configuring FluentUI version ${FluentUI_Qt_version}")
# Project version
project(FluentUI-Qt
        VERSION "${FluentUI_Qt_version}"
        LANGUAGES C CXX)

set(VERSION "${PROJECT_VERSION}")
set(FLUENTUI_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(FLUENTUI_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(FLUENTUI_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(INTERFACE_VERSION_MAJOR 1)
set(INTERFACE_VERSION_MINOR 0)
set(INTERFACE_VERSION_D "${INTERFACE_VERSION_MAJOR}.${INTERFACE_VERSION_MINOR}")
set(INTERFACE_VERSION_U "${INTERFACE_VERSION_MAJOR}_${INTERFACE_VERSION_MINOR}")

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
include(FluentUIDLL)

option(BUILD_EXAMPLES "Build example applications" ON)
option(BUILD_TESTS "Build tests" ON)
option(BUILD_DOCS "Build documentation" OFF)
option(BUILD_DESIGNER_PLUGIN "Build Qt Designer plugin" OFF)

# Process subdirectories
add_subdirectory(src)

if(BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

if(BUILD_DOCS)
    add_subdirectory(docs)
endif()

if(BUILD_DESIGNER_PLUGIN)
    add_subdirectory(designer_plugin)
endif()


# Display configuration summary
message(STATUS "")
message(STATUS "FluentUI-Qt configuration summary")
message(STATUS "--------------------------------")
message(STATUS "")
message(STATUS "  Version:                      ${FluentUI_version}")
message(STATUS "")  
message(STATUS "  Installation directory:       ${prefix}")
message(STATUS "  C compiler:                   ${CMAKE_C_COMPILER}")
message(STATUS "  C++ compiler:                 ${CMAKE_CXX_COMPILER}")
message(STATUS "  Qt version:                   ${Qt_VERSION}")
message(STATUS "")  
message(STATUS "  Build shared libraries:       ${BUILD_SHARED_LIBS}")
message(STATUS "  Build tests:                  ${BUILD_TESTS}")
message(STATUS "  Build example applications:   ${BUILD_EXAMPLES}")
message(STATUS "  Build documentation:          ${BUILD_DOCS}")
message(STATUS "  Build Qt Designer plugin:     ${BUILD_DESIGNER_PLUGIN}")