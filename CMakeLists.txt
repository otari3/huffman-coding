cmake_minimum_required(VERSION 3.10)
project(huffman-coding C)
set(CMAKE_C_STANDARD 11)
add_executable(main main.c
        libs/stb_ds.h
        huffman.c
        huffman.h
        libs/strings/sds.c
        libs/strings/testhelp.h)

