add_executable(Sandbox
    src/main.cc
    src/sandbox.cc
)
target_link_libraries(Sandbox PRIVATE Engine)