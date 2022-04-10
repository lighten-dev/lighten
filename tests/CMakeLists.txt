

option(LIGHTEN_ENABLE_TESTS "build all tests." ON)
if(test)
  set(LIGHTEN_TEST_SORCES ${CMAKE_CURRENT_SOURCE_DIR}/tests/src)
  list(FILTER LIGHTEN_TEST_SOURCES INCLUDE REGEX ${LIGHTEN_SOURCES}/*)

  message(${LIGHTEN_TEST_SOURCES})

  target_compile_options(tests PRIVATE -Wall -Wextra -Wpedantic)

  add_executable(runUnitTests ${LIGHTEN_TEST_SOURCES})
  
  target_link_libraries(runUnitTests gtest gtest_main)
  target_add_libraries(runUnitTests "glm" "glad" "glfw" "gtest")
  
  add_test(NAME TEST COMMAND runUnitTests)

endif()
