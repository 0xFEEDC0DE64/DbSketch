find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Network CONFIG REQUIRED)

set(HEADERS
)

set(SOURCES
    main.cpp
)

add_executable(sketchviewer ${HEADERS} ${SOURCES})

target_link_libraries(sketchviewer Qt5::Core Qt5::Network sketchlib)

add_dependencies(sketch sketchviewer)
