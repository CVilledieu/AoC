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
#include <stdio.h>
#include <stdlib.h>


FILE* openFile(){
    char* fileName = "input.txt";
    FILE *fp = fopen(fileName, "r");
    return fp;
}


int parseRange(FILE* fp, char* left_buffer, char* right_buffer){
    return fscanf(fp, "%24[^-]-%24[^,],", left_buffer, right_buffer); 
}


// int parseRange(FILE* fp, char* left_buffer, char* right_buffer){
//     int left_range = 0;
//     int right_range = 0;
//     int res = fscanf(fp, "%i-%i,", left_range, right_range);
//     if (res == -1) return -1;

//     sprintf(left_buffer, "%i", left_range);
//     sprintf(right_buffer, "%i", right_range);

//     return 0;
// }
