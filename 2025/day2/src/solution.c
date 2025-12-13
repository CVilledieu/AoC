//Notes:
// invalid ids are ids with numbers that repeat within the id 11 1212
// because ids have to repeat length of id must be even (lenght % 2 = 0)
//
//Tasks:
// Read range from file
// Parse left and right side of range
// Check for if length % 2 == 0 can be within the range
// Find invalid ids
// Sum invalid ids
#include <solution.h>


FILE* init(){
    printf("Reading from %s\n", FILE_NAME);
    FILE *fp = fopen(FILE_NAME, "r");

    return fp;
}

int rangeSize(char* buffer){
    for (int i = 0; i < RANGE_BUFFER_SIZE; i++){
        if(buffer[i] == '\0' || buffer[i] == '\n'){
            return i;
        }
    }
    return -1;
}

int parseRange(FILE* fp, char* left_buffer, char* right_buffer){
    if (fscanf(fp, PARSE_FORMAT, left_buffer, right_buffer) == EOF){
        return EOF;
    }
    int left_size = rangeSize(left_buffer);
    int right_size = rangeSize(right_buffer);
    
    if (left_size == right_size && left_size %2 != 0){
        return 0;
    } else {
        return 1;
    }

}


