cmake_minimum_required(VERSION 3.20)

project(cpp-001  VERSION 1.0 DESCRIPTION "cpp-001" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#===================================================================================================#
#                                   Google Test                                                     #
#===================================================================================================#
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

#===================================================================================================#
#                                    Библиотека tsk001                                              #
#===================================================================================================#
add_library(tsk001 STATIC
    include/tsk001/tsk001.cpp
)

target_include_directories(tsk001
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
#===================================================================================================#
#                                    Библиотека tsk002                                              #
#===================================================================================================#
add_library(tsk002 STATIC
    include/tsk002/tsk002.cpp
)

target_include_directories(tsk002
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
#===================================================================================================#
#                                    Библиотека tsk003                                              #
#===================================================================================================#
add_library(tsk003 STATIC
    include/tsk003/tsk003.cpp
)

target_include_directories(tsk003
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
#===================================================================================================#
#                                    Библиотека tsk004                                              #
#===================================================================================================#
add_library(tsk004 STATIC
    include/tsk004/tsk004.cpp
)

target_include_directories(tsk004
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
#===================================================================================================#
#                               Основная программа                                                  #
#===================================================================================================#
add_executable(cpp-001
    src/main.cpp
)

# Подключаем библиотеки tsk001, tsk002, tsk003, tsk004
target_link_libraries(cpp-001
    PRIVATE
        tsk001
        tsk002
        tsk003
        tsk004
)
                
set_target_properties(cpp-001 PROPERTIES
                              RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)

#===================================================================================================#
#                                         Тесты                                                     #
#===================================================================================================#
enable_testing()

add_executable(
    tests
    tests/test-002.cpp)

target_link_libraries(
    tests
    PRIVATE
        tsk001
        tsk002
        tsk003
        tsk004
        GTest::gtest_main)

include(GoogleTest)

gtest_discover_tests(tests)