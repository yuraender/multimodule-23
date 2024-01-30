CMAKE_MINIMUM_REQUIRED( VERSION 3.14)
PROJECT(multimodule_app)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable( demoapplication executable/app.cpp )
include_directories( library )
target_link_libraries( demoapplication rootmodule )

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_library( rootmodule SHARED library/speaker.cpp )