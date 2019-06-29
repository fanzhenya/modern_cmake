project(mylib)

set(PUBLIC_HEADERS include/mylib.hpp)
set(PRIVATE_HEADERS src/mylib_impl.hpp)

add_library(mylib
        SHARED
        ${PUBLIC_HEADERS}
        ${PRIVATE_HEADERS}
        src/mylib.cpp
        )
target_include_directories(mylib
        PUBLIC
        include
        PRIVATE
        src
        )
