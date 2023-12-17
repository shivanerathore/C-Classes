//Write a c program that uses command line arguments and bitwise operators
//to perform multiplication

#include <stdlib.h> //for atoi
#include <stdio.h>

//using command line for arguments
int main(int argc, char* argv[]) {
int num1,num2;
int product=0;

//throwing error if not 3 values
if(argc<3){
	fprintf(stderr,"usage %snumber\n",argv[0]);
	return 1; //takes out of main fucntion (end program)
}

//setting command line equal to variable
num1=atoi(argv[1]); //second argument (changing to int)
num2=atoi(argv[2]); //third argument 

//
while(num2){ //no boolean (as long as num2 isnt 0 it keeps going)
	if(num2&1) { //(bitwise and 1) if anything but 0 it adds num1 to product
		product=product+num1;
	}
	num2>>=1; //shifting num2 to right
	num1<<=1; //shifting num1 to left
}

//printing the product
printf("%d*%d=%d",atoi(argv[1]),atoi(argv[2]),product);

return 0;
} //main bracket

//    ***to run****
//    ./a.out 5 7
//    ./a.out 10 2














