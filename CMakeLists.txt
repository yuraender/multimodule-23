cmake_minimum_required(VERSION 3.23)
project(Game)

set(CMAKE_CXX_STANDARD 20)

add_executable(Game src/main.cpp)
include_directories(include)
#add_subdirectory(test)

#Tests
enable_testing()

set(LIBRARIES)
foreach (LIBRARY ${LIBRARIES})
    add_subdirectory("libs/${LIBRARY}")
endforeach (LIBRARY)
target_link_libraries(Game ${LIBRARIES})
