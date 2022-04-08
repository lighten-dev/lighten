
file(GLOB_RECURSE ENGINE_SRC source *.*)

add_library(engine STATIC ${ENGINE_SRC})

target_include_directories(engine PUBLIC 
	./source
	./submodules
	)