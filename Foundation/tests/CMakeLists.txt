add_executable(tester pch.cpp tests.cpp)

target_link_libraries(tester PUBLIC rand)
target_include_directories(tester PUBLIC "${CMAKE_SOURCE_DIR}/Foundation/include/rand")

add_test(NAME rand.stress.100 COMMAND tester)

