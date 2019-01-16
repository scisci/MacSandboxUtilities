cmake_minimum_required(VERSION 3.0)
project(MacSandboxUtilities)

set(CMAKE_C_FLAGS "-x objective-c")
set(CMAKE_CXX_FLAGS "-x objective-c++")


set(HEADER_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/SandboxFileManager.h
)
set(SOURCE_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/SandboxFileManager.m
)

add_library(
    MacSandboxUtilities
    ${HEADER_FILES}
    ${SOURCE_FILES}
)
