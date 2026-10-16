//
// Created by otiko nozadze on 16.10.26.
//

#ifndef HUFFMAN_CODING_HUFFMAN_H
#define HUFFMAN_CODING_HUFFMAN_H
#include "libs/stb_ds.h"
typedef struct frequencyc {
    char key;
    int value;
} frequencyc;
frequencyc* get_frequency_in_file(char* fileName);

#endif //HUFFMAN_CODING_HUFFMAN_H
