cmake_minimum_required(VERSION 3.21)

project(Engine
    VERSION 0.1.0
    LANGUAGES CXX
)

# Use C++20 everywhere, without compiler-specific extensions
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Generate compile_commands.json for IntelliSense / clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Put all executables and DLLs in one folder so they find each other at runtime
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(engine)
add_subdirectory(sandbox)
add_subdirectory(external)

# Warnings
if(MSVC)
    target_compile_options(Sandbox PRIVATE /W4 /permissive- /utf-8)
else()
    target_compile_options(Sandbox PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Make the sandbox/game the default startup project if a VS solution is ever generated
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Engine)
