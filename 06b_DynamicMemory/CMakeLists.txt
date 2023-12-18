set(CMAKE_C_STANDARD 17)

set(EXECUTABLE_NAME 06b_DynamicMemory)
set(SRC_FILES
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

add_executable(${EXECUTABLE_NAME} ${SRC_FILES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")