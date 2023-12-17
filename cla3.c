//Write a C program that in main call a function and within that function you generate
//an array of 5 random integers. And return a pointer to that array. Print array elements 
//in the main
//uses malloc function

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototype
int* getNumbers();

int main(void) {
//initializing variables
int *ptr;
int i;

ptr=getNumbers(); //calling function

//loop to print numbers
for(i=0; i<5; ++i) {
	printf("(ptr+%d):%d\n",i,*(ptr+i));
}

free(ptr); //when using malloc have to free the memory

return 0;
} //main bracket

//function definition
int* getNumbers() {
//static int random[5]; //change to make static
int *random;
random = (int*)malloc(sizeof(int)*5); //malloc function (allocating in memory 20 bytes)
int i;

srand(time(NULL)); //seeding

//loop to get random numbers
for(i=0; i<5; ++i) {
random[i] = rand();
printf("r[%d]=%d\n",i,random[i]);
}
return random;
}


