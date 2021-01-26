set(SOURCES main.cpp )

add_executable(${PROJECT_NAME} ${SOURCES})

find_package(Boost REQUIRED COMPONENTS system)
target_link_libraries(${PROJECT_NAME} Boost::system)
