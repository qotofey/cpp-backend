cmake_minimum_required(VERSION 3.13)
project(WebCpp)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

conan_basic_setup()

add_executable(
        ${PROJECT_NAME}
        main.cpp
        server/src/Server.cpp
        server/src/RequestHandlerFactory.cpp
        server/src/Handler.cpp
        server/src/ErrorHandler.cpp
        server/src/HomeHandler.cpp
        server/src/PostHandler.cpp

)

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})