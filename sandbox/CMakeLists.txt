add_executable(sandbox
    src/main.cc
    src/sandbox.cc
)
target_link_libraries(sandbox PRIVATE engine)