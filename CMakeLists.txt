cmake_minimum_required(VERSION 3.10)
project(huffman-coding C)
set(CMAKE_C_STANDARD 11)
add_executable(main main.c
        libs/stb_ds.h
        libs/strings/sds/sds.h
        libs/strings/sds/sdsalloc.h
        libs/strings/sds/testhelp.h
        libs/strings/sds/sds.c
        huffman.c
        huffman.h)

