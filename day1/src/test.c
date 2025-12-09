#include <stdio.h>


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


int main(void){
    int pos = 50;
    int spin = 552;
    int res = spinDial(&pos, spin);
    printf("%d\n", res);

}