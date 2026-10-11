add_library(engine STATIC
    src/core.cc
)

target_include_directories(engine
    PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
)

find_package(OpenGL REQUIRED)
target_link_libraries(engine PUBLIC imgui glfw OpenGL::GL)