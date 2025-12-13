#include "solution.h"




int main(void){
    FILE *fp = init();
    if (fp == NULL){
        return -1;
    }
    int res = 0;
    while(res != EOF){
        char left_buffer[RANGE_BUFFER_SIZE];
        char right_buffer[RANGE_BUFFER_SIZE];
        res = parseRange(fp, left_buffer, right_buffer);
        if (res == 0) continue;
        

    }
}