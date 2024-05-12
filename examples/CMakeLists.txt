set(BINARY ${CMAKE_PROJECT_NAME}_examples)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

include_directories(../include)
add_executable(${BINARY} ${TEST_SOURCES})
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_src_lib)

add_test(NAME ${BINARY} COMMAND ${BINARY})