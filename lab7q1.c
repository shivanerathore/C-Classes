#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//command line argument
int main (int argc, char *argv[]){
//initializing variables
int *arr;
int i, num;
int sumOdd=0, sumEven=0;
int summ=0;

//pointer array and read command line arg
char *a = argv[1];

//string to integer
num = atoi(a);

//dynamic memory allocation
arr = (int*)malloc(num*sizeof(int));
  
//seeding
srand(time(NULL));

//random nums from 0 -100
for(i=0; i<num; i++){
	arr[i] = rand()%101; 
}
 
//printing array of random nums
printf("array = ");
for(i=0; i<num; i++){
	printf("%d ",*(arr+i));
}
 
printf("\n");

//find sum of odd and even values
for(i=0; i<num; i++){
    if((*arr+i&1)==0){ //&1 (and) instead of mod
          sumEven+=*arr+i;
	}
    else{
       sumOdd+=*arr+i;
    }
}

//adding evens and odds
summ = sumEven+sumOdd;

//printing even, odd, sum
printf("sum of even = %d\n",sumEven);
printf("sum of odd = %d\n",sumOdd);
printf("sum of all = %d\n",summ);
 
return 0;
}
