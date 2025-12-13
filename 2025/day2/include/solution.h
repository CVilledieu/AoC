#pragma once

#include <stdio.h>
#include <stdlib.h>

#define RANGE_BUFFER_SIZE 25
#define PARSE_FORMAT "%24[^-]-%24[^,],"


#ifdef TEST_MODE
    #define FILE_NAME "include/test.txt"
#else 
    #define FILE_NAME "include/input.txt"
#endif

FILE* init();
int parseRange(FILE* fp, char* left_buffer, char* right_buffer);