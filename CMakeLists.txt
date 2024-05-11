cmake_minimum_required(VERSION 3.28)
project(IB_Cpp_Api_Client)

set(CMAKE_CXX_STANDARD 26)

add_library(IB_Cpp_Api_Client STATIC src/ibClient.cpp
        src/ibClient.cpp
        include/ibClient.h)
