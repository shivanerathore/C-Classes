#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("argc=%d\n",argc);
	printf("argv[0]=%s",argv[0]);
	printf("argv[1][3]=%c\n",argv[1][3]);
	
	return 0;
}