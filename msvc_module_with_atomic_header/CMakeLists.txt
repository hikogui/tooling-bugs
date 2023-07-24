
cmake_minimum_required(VERSION 3.25)

if(${CMAKE_VERSION} VERSION_LESS "3.26")
    # CMake 3.25
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "3c375311-a3c9-4396-a187-3227ef642046")
elseif(${CMAKE_VERSION} VERSION_LESS "3.27")
    # CMake 3.26
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
else()
    # CMake 3.27
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "aa1f7df0-828a-4fcd-9afc-2dc80491aca7")
endif()
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

project(default)

add_library(example_lib example.cpp)
target_sources(example_lib PUBLIC FILE_SET CXX_MODULES FILES weird.ixx)
target_compile_features(example_lib PUBLIC cxx_std_23)
target_compile_options(example_lib PUBLIC -nologo)

