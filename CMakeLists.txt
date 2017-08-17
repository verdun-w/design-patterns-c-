cmake_minimum_required(VERSION 3.8)
project(design_patterns_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        factory/abstract/includes/Factory.hpp
        factory/abstract/includes/Object.hpp
        factory/abstract/includes/Object_a.hpp
        factory/abstract/includes/Object_b.hpp
        factory/abstract/includes/Object_factory.hpp
        factory/abstract/Factory.cpp
        factory/abstract/main.cpp
        factory/abstract/Object_a.cpp
        factory/abstract/Object_b.cpp
        good_practice/canonical_form.hpp)

add_executable(design_patterns_cpp ${SOURCE_FILES})