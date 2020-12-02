#include <stdio.h>

int logicalNeg(int x) {
    return ((x >> 31) | ((~x + 1) >> 31)) + 1;
}

int howManyOnes(int x) {
    x = (x & 0x55555555) + ((x >> 1) & 0x55555555);
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = (x & 0x0F0F0F0F) + ((x >> 4) & 0x0F0F0F0F);
    x = (x & 0x00FF00FF) + ((x >> 8) & 0x00FF00FF);
    x = (x & 0x0000FFFF) + ((x >> 16) & 0x0000FFFF);
    return x;
}

int main(int argc, char* argv[]) {
    int a = logicalNeg(6);
    int b = logicalNeg(-8);
    int c = logicalNeg(0);
    printf("%d %d %d\n", a, b, c);


    // howManyOnes test
    a = howManyOnes(6);
    b = howManyOnes(-8);
    c = howManyOnes(0);
    printf("%d %d %d\n", a, b, c);

    return 0;
}