//
// Created by otiko nozadze on 16.10.26.
//
#define STB_DS_IMPLEMENTATION
#include "huffman.h"

#include <stddef.h>
#include <stdio.h>


int comp(const void *a, const void *b) {
    frequencyc x = *(frequencyc*)a;
    frequencyc y = *(frequencyc*)b;
    if (x.value>y.value) {
        return -1;
    }
    if (x.value<y.value) {
        return 1;
    }
    if (x.key>y.key) {
        return -1;
    }
    if (x.key<y.key) {
        return 1;
    }
    return 0;
}

frequencyc* get_frequency_in_file(char* fileName) {
    frequencyc* letterCounter = NULL;
    FILE* file_pointer = fopen(fileName,"r");
    int ch;
    if (file_pointer==NULL) {
        printf("Error:Could not open %s\n",fileName);
        return NULL;
    }
    while ((ch = fgetc(file_pointer)) != EOF) {
        int index = hmgeti(letterCounter,(char)ch);
        if (index==-1) {
            hmput(letterCounter,(char)ch,1);
        }else {
            letterCounter[index].value++;
        }
    }
    qsort(letterCounter,hmlen(letterCounter),sizeof(frequencyc),comp);
    return letterCounter;
}


