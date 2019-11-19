set(MODULE_NAME ${PROJECT_NAME})
project(${MODULE_NAME})
message("")
message("MODULE_NAME --> " ${MODULE_NAME})

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pthread")

file(GLOB_RECURSE SOURCES "main.cpp" "*.cpp")
foreach(file ${SOURCES})
    message("${MODULE_NAME} SOURCES FILE = " ${file})
endforeach()

file(GLOB_RECURSE HEADERS "*.hpp" "*.h")
foreach(file ${HEADERS})
    message("${MODULE_NAME} HEADERS FILE = " ${file})
endforeach()

# Tell CMake to create the helloworld executable
add_executable(${MODULE_NAME} ${SOURCES})

target_link_libraries( ${MODULE_NAME} PRIVATE CMakeStaticLibTemplate )
