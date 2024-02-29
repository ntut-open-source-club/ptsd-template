set(SRC_FILES
        App.cpp
        Cat.cpp
        Giraffe.cpp
        GiraffeText.cpp
        )

set(INCLUDE_FILES
        App.hpp
        Cat.hpp
        Giraffe.hpp
        GiraffeText.hpp
        )

set(TEST_FILES
        )

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
list(TRANSFORM SRC_FILES PREPEND ${SRC_DIR}/)
list(TRANSFORM INCLUDE_FILES PREPEND ${INCLUDE_DIR}/)

# file(GLOB_RECURSE SRC_FILES src/*)
# file(GLOB_RECURSE HEADER_FILES include/*)
