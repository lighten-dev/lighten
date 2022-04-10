set(EDITOR_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src)
list(FILTER EDITOR_SOURCES INCLUDE REGEX ${LIGHTEN_SOURCES}/*)

add_executable(editor ${EDITOR_SOURCES})

target_link_libraries(editor engine)
target_add_libraries(lighten "glm" "glad" "glfw" "freetype" "stb" "spdlog")

target_compile_options(editor PRIVATE -Wall -Wextra -Wpedantic)

set_target_properties(editor PROPERTIES LINKER_LANGUAGE CXX)