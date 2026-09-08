cmake_minimum_required(VERSION 3.20)

project(cpp-001  VERSION 1.0 DESCRIPTION "cpp-001" LANGUAGES CXX)

set(src main.cpp)

add_executable(cpp-001  ${src})

target_compile_features(cpp-001 PUBLIC cxx_std_17)
                
set_target_properties(cpp-001 PROPERTIES
                              CXX_STANDARD_REQUIRED ON
                              RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)