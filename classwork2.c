#include <stdio.h>

//function prototype
void displayBits(unsigned short);

int main(void) {
//initializing variables
unsigned short num;

//user input 
printf("Enter an unsigned short integer to convert: ");
scanf("%hu",&num);

displayBits(num); //calling function

return 0;
} //main bracket


//function 
void displayBits(unsigned short val) {
unsigned short c;
unsigned short displayMask=1<<15; //shifting 1 left 15

printf("%10hu = ",val);
for(c=1; c<=16; c++) {
	putchar(val&displayMask?'1':'0');
	val<<=1;
	if(c%8==0)
		printf(" ");
}

} //function end bracket