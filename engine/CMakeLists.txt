set(LIGHTEN_SOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
file(GLOB_RECURSE LIGHTEN_SOURCES ${SRC_DIR} *.*)
list(FILTER LIGHTEN_SOURCES INCLUDE REGEX ${LIGHTEN_SOURCES_DIR}/*)
mvs_update_filters("${LIGHTEN_SOURCES}")

add_library(lighten ${LIGHTEN_SOURCES})

target_add_libraries(lighten "glm" "glad" "glfw" "freetype" "stb" "spdlog")

target_compile_options(lighten PRIVATE -Wall -Wextra -Wpedantic)

set_target_properties(lighten PROPERTIES LINKER_LANGUAGE CXX)