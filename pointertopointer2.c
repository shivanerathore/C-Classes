//seeing the biggest 2d array you can make without using dynamic memory location
//NOT WORKING [1200x1200 is correct andwer]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int i, j;
int row=100, col=100;
int arr[i][j]; //pointer to pointer

srand(time(NULL)); //seeding

for(i=0; i<ROW; ++i){
	for(j=0; j<COL; ++j) {
		arr[i][j] = rand()%6;
		printf("[%d][%d]",arr[i][j]);
	}
}

return 0;
}