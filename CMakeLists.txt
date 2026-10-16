cmake_minimum_required(VERSION 3.10)
project(huffman-coding C)
set(CMAKE_C_STANDARD 11)
add_executable(main main.c
        libs/stb_ds.h
        huffman.c
        huffman.h
        libs/strings/sds.c
        libs/strings/testhelp.h
      )

find_package(PkgConfig REQUIRED)
pkg_check_modules(CRITERION REQUIRED IMPORTED_TARGET criterion)

add_executable(huffmanTests huffman.c libs/stb_ds.h
        huffman.h
        libs/strings/sds.c
        libs/strings/testhelp.h
        huffmanTests.c)
target_link_libraries(huffmanTests PRIVATE PkgConfig::CRITERION)