#include <stdio.h>
#include "libs/strings/sds.h"
#include "huffman.h"

int main() {
    frequencyc *counter = get_frequency_in_file("/Users/otikonozadze/Desktop/huffman-coding/tests/test_files/frequancyTestTxt.md");
    for (int i = 0;i<hmlen(counter);i++) {
        printf("Key->%c Value->%d \n",counter[i].key,counter[i].value);
    }
    return 0;
}
