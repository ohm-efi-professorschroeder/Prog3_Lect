set(CMAKE_C_STANDARD 17)

set(EXECUTABLE_NAME 04a_ClassHierarchie)
set(SRC_FILES
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/camera.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/photographer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/event.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/event.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/filmcamera.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/digitalcamera.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/smartphone.cpp
)

add_executable(${EXECUTABLE_NAME} ${SRC_FILES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")