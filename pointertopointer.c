#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10

int main(void) {
int i, j;
int **arr; //pointer to pointer

srand(time(NULL)); //seeding

arr=(int**)malloc(ROW*sizeof(int*)); //

for(i=0; i<ROW; ++i) {
	arr[i] = (int*)malloc(COL*sizeof(int));
	for(i=0; i<ROW; ++i) {
		for(j=0; j<COL; ++j) {
			arr[i][j] = rand()%6;
			printf("%d",arr[i][j]);
		}
		puts(" ");
	}
}

free(arr);

return 0;
}