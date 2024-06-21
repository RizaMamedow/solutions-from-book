file(GLOB SOURCES 
    "solutions/*.cpp"
)

add_executable(main main.cpp ${SOURCES})

set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)


target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)