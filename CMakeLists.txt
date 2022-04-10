
cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lighten LANGUAGES CXX C)

function(mvs_update_filters SOURCES)
    foreach(_source IN ITEMS ${SOURCES})
    if(IS_ABSOLUTE "${_source}")
        file(RELATIVE_PATH _source_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_source}")
    else()
        set(_source_rel "${_source}")
    endif()
    get_filename_component(_source_path "${_source_rel}" PATH)
    string(REPLACE "/" "\\" _source_path_msvc "${_source_path}")
    source_group("${_source_path_msvc}" FILES "${_source}")
    endforeach()
endfunction(mvs_update_filters)


add_subdirectory(third_party)
add_subdirectory(engine)
add_subdirectory(editor)
add_subdirectory(tests)