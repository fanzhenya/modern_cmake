project(myexe)

#find_package(mylib REQURIED)

add_executable(myexe main.cpp)
target_link_libraries(myexe PRIVATE mylib)