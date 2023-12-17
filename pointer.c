//create a c program that generates an array of randomly generated integers
/from 0 to 999. Create a function that accepts an integer array and returns
//a pointer to the smallesr number in that array. Print the smallest value
//in main

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//preprosessor directive
#define SIZE 100;

//function prototype
int* smallest(int[]);

int main(void) {
int arr[SIZE];
int t;
int *p; //pointer p

//seeding
srand(time(NULL));

//giving random nums to array
for(i=0; i<SIZE; i++) {
arr[i]=rand()%1000;
printf("%d\n",a[i]);
}

//calling function
p = smallest(arr);

//printing
printf("%d\n",*p);

return 0;
}//end



int* smallest(int arrX[]) {
int j;
int small;
int *ptr;

small = arrX[0]; 
ptr = &arrX[0]; //pointing to first element address in array

for(j=1; j<SIZE; ++j) {
if(x[j]<small) {
small = arrX[j];
ptr = &arrX[j];
}
}
return ptr;
}//function end

