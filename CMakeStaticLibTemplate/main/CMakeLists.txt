set(MODULE_NAME ${PROJECT_NAME})
project(${MODULE_NAME})
message("")
message("MODULE_NAME --> " ${MODULE_NAME})

# Find includes in the build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Add a compiler flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pthread")

file(GLOB_RECURSE SOURCES "*.cpp" )
foreach(file ${SOURCES})
    message("${MODULE_NAME} SOURCES FILE = " ${file})
endforeach()

file(GLOB_RECURSE HEADERS "*.hpp")
foreach(file ${HEADERS})
    message("${MODULE_NAME} HEADERS FILE = " ${file})
endforeach()

# Tell CMake to create the helloworld executable
add_library(${MODULE_NAME} STATIC ${SOURCES})
target_include_directories(${MODULE_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})


install(TARGETS ${MODULE_NAME} DESTINATION lib)
install(FILES ${HEADERS} DESTINATION include)
