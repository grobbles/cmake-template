set(MODULE_NAME ${PROJECT_NAME})
project(${MODULE_NAME})
message("")
message("MODULE_NAME --> " ${MODULE_NAME})

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pthread")

file(GLOB SOURCES "main.cpp" "*.cpp" "*.hpp" "*.h"  "*.ui" "*/*.cpp" "*/*.hpp"  "*/*.ui" "*/*.h")
message(${SOURCES})

# Tell CMake to create the helloworld executable
add_executable(${MODULE_NAME} ${SOURCES})
