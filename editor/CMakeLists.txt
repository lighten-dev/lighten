set(EDITOR_SOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
file(GLOB_RECURSE EDITOR_SOURCES ${SRC_DIR} *.*)
list(FILTER EDITOR_SOURCES INCLUDE REGEX ${EDITOR_SOURCES_DIR}/*)
mvs_update_filters("${EDITOR_SOURCES}")
add_executable(editor ${EDITOR_SOURCES})

target_link_libraries(editor engine)
target_add_libraries(editor "glm" "glad" "glfw" "freetype" "stb" "spdlog")

target_compile_options(editor PRIVATE -Wall -Wextra -Wpedantic)

set_target_properties(editor PROPERTIES LINKER_LANGUAGE CXX)