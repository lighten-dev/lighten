
file(GLOB_RECURSE APP_SRC source *.*)

add_executable(application ${APP_SRC})
target_link_libraries(application engine)