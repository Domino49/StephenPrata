cmake_minimum_required(VERSION 3.7)

# ----------------------------------------------------------------------------
# Common compiler options
# ----------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Werror)

# ----------------------------------------------------------------------------
# Project subdirectories
# ----------------------------------------------------------------------------

add_subdirectory(chapter_2)