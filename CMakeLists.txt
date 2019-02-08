cmake_minimum_required(VERSION 3.0)
project(MacSandboxUtilities)

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

target_include_directories(MacSandboxUtilities PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)
