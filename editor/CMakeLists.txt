
file(GLOB_RECURSE APP_SRC source *.*)

add_executable(editor ${APP_SRC})
target_link_libraries(editor engine)