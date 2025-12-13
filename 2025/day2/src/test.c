#include "solution.h" 
#include <assert.h>

void test_fileParsing(FILE* fp){
    printf("Running test_fileParsing...");
    char left_buffer[RANGE_BUFFER_SIZE];
    char right_buffer[RANGE_BUFFER_SIZE];

    assert(parseRange(fp, left_buffer, right_buffer) == 1);
    assert(parseRange(fp, left_buffer, right_buffer) == 1);
    fclose(fp);
    printf("PASSED\n");

}



int main(void){
    FILE *fp = init();
    assert(fp != NULL);
    printf("Testing");
    test_fileParsing(fp);
}