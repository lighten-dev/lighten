

option(LIGHTEN_ENABLE_TESTS "build all tests." ON)
if(LIGHTEN_ENABLE_TESTS)
  set(LIGHTEN_TEST_SOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
  file(GLOB_RECURSE LIGHTEN_TEST_SOURCES ${SRC_DIR} *.*)
  list(FILTER LIGHTEN_TEST_SOURCES INCLUDE REGEX ${LIGHTEN_TEST_SOURCES_DIR}/*)
  mvs_update_filters("${LIGHTEN_TEST_SOURCES}")
  
  add_executable(runUnitTests ${LIGHTEN_TEST_SOURCES})
  set_warnings(runUnitTests)
  target_include_directories(runUnitTests PRIVATE ${LIGHTEN_SOURCES_DIR})
  target_include_directories(runUnitTests PRIVATE ${EDITOR_SOURCES_DIR})

  target_link_libraries(runUnitTests gtest gtest_main)
  target_add_libraries(runUnitTests "glm" "glad" "glfw" "freetype" "stb" "spdlog" "gtest")
  
  add_test(NAME TEST COMMAND runUnitTests)

endif()
