#include <stdio.h>
#define MASK 3

int main(void) {
//initializting variables
unsigned int num;
unsigned int totall=0;

//user input unsigned 
printf("Enter an unsigned integer and end with a 99: ");
scanf("%u",&num);
	
while(num!=99){
	if(!(num&MASK)) //if not bitwise and with 3
		totall+=num;
	printf("Enter an unsigned integer and end with a 99: ");
	scanf("%u",&num);
}

printf("The sum of the numbers divisible by 4",totall);

return 0;
}