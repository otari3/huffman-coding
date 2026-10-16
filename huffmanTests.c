//
// Created by otiko nozadze on 16.10.26.
//

#include <criterion/criterion.h>
#define ARRAY_HELPER
#include "huffman.h"
#include "libs/strings/sds.h"

Test(freqCounterTest, counter) {
    frequencyc *counter = get_frequency_in_file("/Users/otikonozadze/Desktop/huffman-coding/tests/test_files/frequancyTestTxt.md");
    sds actualString = sdsnew("");
    sds expectedString = sdsnew("e13 13t9i9l7s6o5n5a5r4m4u3c3p2g2d2.2q1f1P1L1,1");
    for (int i = 0;i<hmlen(counter);i++) {
        actualString = sdscat(actualString,&counter[i].key);
        char str[20];
        sprintf(str, "%d", counter[i].value);
        actualString = sdscat(actualString,str);
    }
    cr_assert_eq(strcmp(actualString,expectedString), 0);
}