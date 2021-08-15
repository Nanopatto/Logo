cmake_minimum_required(VERSION 3.10)
project(Thunder VERSION 1.0
              DESCRIPTION "Rayito"
              LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin)

set(sources
  src/main.c
  src/coordinates.c
  src/thunder.c
  src/color.c
  src/image.c
)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(thunder ${sources})

install (TARGETS thunder DESTINATION bin)