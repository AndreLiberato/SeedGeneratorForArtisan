cmake_minimum_required(VERSION 3.5)
project(SeedGenerateForArtisan VERSION 0.1 LANGUAGES CXX)

# Compiling flags
add_compile_options(
  -g
  -Wall
  -Werror
  -Wextra
  -Wpedantic
  -ansi
  -Ofast
  -fsanitize=address,undefined
  # -lm
)

# Link options for fsanitize
add_link_options(-fsanitize=address,undefined)

# This is for old cmake versions
set (CMAKE_CXX_STANDARD 17)

# Application target
# Configura o diretório contendo os .hpp
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Cria um executável com nome "sga".
add_executable(sga)

target_sources(
  sga
  PRIVATE
    src/main.cpp
    src/util.cpp
)

# The end