
//Bounds inclusive
//Lower bound: 0
//Upper bound: 99
//
//Start: 50
//
//Leading L: subtract
//Leading R: add
//i.e.
// L8: -8 from current location
// R10: +10 to current location
//
//Target: n times current location = 0

#include <stdio.h>

#define INPUTFILE "include/input.text"
#define TESTFILE "include/test.text"

#define BUFFER_SIZE 20

int parseLine(char* buff){
    char dir[2];
    int num = 0;
    sscanf(buff, "%1s%d", dir, &num);
    if (dir[0] == 'L'){
        num *= -1;
    }

    
    return num;
}


int spinDial(int* pos, int spin){
    int zeros = 0;
    int new = *pos + spin;
    if (new >= 100){
        zeros += new / 100;
    }else if( new < -99){
        zeros += (-1 * new) / 100;
        new %= 100;
        if (new <= 0 && *pos != 0){
            zeros++;
        } 
    } else if (new <= 0 && *pos != 0){
            zeros++;
    } 
    
    new = ((new % 100) + 100) % 100;

    *pos = new;
    return zeros;
}


int parseFile(){
    FILE *fp;
    fp = fopen(INPUTFILE ,"r");
    
    int current_pos = 50;
    int zero_pos_count = 0;
    char buffer[BUFFER_SIZE];
    while(fgets(buffer, BUFFER_SIZE, fp) != NULL){
        
        int spin = parseLine(buffer);
        zero_pos_count += spinDial(&current_pos, spin);
        printf("Current pos: %i, Spin: %i Zero: %i \n", current_pos, spin, zero_pos_count);
    }
    return zero_pos_count;
}


int main(){

    int rtn = 0;
    rtn = parseFile();
    printf("Password is: %i\n", rtn);
}