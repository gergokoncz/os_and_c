#include <stdio.h>

int main(int argc, char* argv[]){
	int x = 298;
	printf("%x %d\n", x, x);
	x = (~x + 1);
	int y = 0x7FFFFFF;
	y = (~y + 1);
	printf("%x %x\n", x, y);
	printf("%d %d\n", x, y);
	return 0;
}
