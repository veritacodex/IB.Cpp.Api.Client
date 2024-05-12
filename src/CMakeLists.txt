set(BINARY ${CMAKE_PROJECT_NAME}_src)
include_directories(../include)

file(GLOB SOURCES *.cpp)
set(SOURCES ${SOURCES})
include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_executable(${CMAKE_PROJECT_NAME}_src ${SOURCES})
add_library(${BINARY}_lib SHARED ${SOURCES}
        main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_src ${BINARY}_lib)