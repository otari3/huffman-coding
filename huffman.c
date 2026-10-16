//
// Created by otiko nozadze on 16.10.26.
//
#define STB_DS_IMPLEMENTATION
#include "huffman.h"

#include <stddef.h>
#include <stdio.h>

frequencyc* get_frequency_in_file(char* fileName) {
    frequencyc* counter = NULL;
    FILE* file_pointer = fopen(fileName,"r");
    int ch;
    if (file_pointer==NULL) {
        printf("Error:Could not open %s\n",fileName);
        return NULL;
    }
    while ((ch = fgetc(file_pointer)) != EOF) {
        int index = hmgeti(counter,(char)ch);
        if (index==-1) {
            hmput(counter,(char)ch,1);
        }else {
            counter[index].value++;
        }
    }
    return counter;
}


