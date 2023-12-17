//Write a C program that asks the user for the size of the integer array 10 to 50
//keep asking if invalid dynamically allocate memory for the array populate with random //integers 0-100 print array to screen.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int n=0;
int i;
int *ptr;

//keeps asking if not in range
while(n<10 || n>50){
	printf("Enter an array size from 10-50: ");	
	scanf("&d",&n);
}

ptr=(int*)malloc(sizeof(int)*n); //using malloc
if(ptr==NULL){
	printf("Allocation Failed");
	exit (1);
}

//can also do to resplace ^^^
//if((ptr=(int*)malloc(sizeof(int)*5))==NULL{
//	puts("allocation failed");
//	exit(1);
//}

srand(time(NULL)); //seding 

for(i=0; i<n; ++i){
	ptr[i] = rand()%101;
	printf("%d\n",ptr[i]);
}

free(ptr);

return 0;
}