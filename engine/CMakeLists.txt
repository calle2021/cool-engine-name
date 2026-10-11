add_library(Engine STATIC
    src/core/application.cc
)

target_include_directories(Engine
    PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/include   # visible to anyone who links Engine
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src       # engine-internal only
)