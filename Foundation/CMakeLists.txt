add_library(rand SHARED rand/rand.cpp)

set_target_properties(rand PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(rand PROPERTIES SOVERSION 1)
set_target_properties(rand PROPERTIES PUBLIC_HEADER ${CMAKE_SOURCE_DIR}/Foundation/include/rand)
target_include_directories(rand PRIVATE include/rand)
target_include_directories(rand PRIVATE rand)

include(GNUInstallDirs)
install(TARGETS rand
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})


add_subdirectory(tests)