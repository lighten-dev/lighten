
cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lighten LANGUAGES CXX C)

add_subdirectory(third_party)
add_subdirectory(engine)
add_subdirectory(editor)
add_subdirectory(tests)
