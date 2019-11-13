set(MODULE_NAME ${PROJECT_NAME}Tests)
project(${MODULE_NAME})
message("")
message("MODULE_NAME --> " ${MODULE_NAME})

set(CMAKE_CXX_FLAGS  -pthread)

file(GLOB SOURCES "main.cpp" "*.cpp" "*/*.cpp"  "../main/Module/*.cpp" "../main/Module/*.hpp")
foreach(file ${SOURCES})
    message("${MODULE_NAME} SOURCES FILE = " ${file})
endforeach()

add_executable(${MODULE_NAME} ${SOURCES})

target_include_directories(${MODULE_NAME} PRIVATE  ../main/Module/ ../main/SlotExample)

target_link_libraries(${MODULE_NAME}  gtest )
