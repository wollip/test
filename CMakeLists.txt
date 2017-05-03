cmake_minimum_required( VERSION 2.8.6 )
project( progressBar )

include_directories(
  "${PROJECT_BINARY_DIR}"
  include
)

add_executable( Progress src/progressBar.cpp )
add_executable( Main src/main.cpp )
