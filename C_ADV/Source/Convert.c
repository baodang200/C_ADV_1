#include <stdio.h>
#include <math.h>

void DEC_HEX(int DEC){
    printf("Hexadecimal of 'a' is: 0x%x\n", DEC);
}

long long DEC_BIN(int DEC){
    int x=0;
    long long binNum = 0;
    while(DEC>0){
    binNum += (DEC % 2) * pow(10, x);
    x++;
    DEC /= 2;
    }
    return binNum;
}
