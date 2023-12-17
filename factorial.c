//Write a c program that has two functions that calculate factorial.
//One function calculates factorial using recursion
//One function uses a control loop
//Ask user for integer between 0-20, end if invalid input

#include <stdio.h>

//functions
int recFac(int); //recursion
int controlFac(int); //control loop

int main (void) {
//initializing variables
int num;
int fac;
int fac2;

//getting user input
printf("Enter a number between 1 to 20");
scanf("%d",&num);

//if statement if num is greater than 0 and less than 20
if(num>0 && num<20) {
fac = recFac(num);
printf("Using recursion = %d\n",fac);
fac2 = controlFac(num);
printf("Using control loop = %d\n",fac2);
}
else {
printf("ERROR ENTER VALID NUMBER 1 TO 20");
}

return 0;
} //end bracket

//defining control structures
int recFac(int num) {
int i;
i=1;
if(num>1) {
i=num*recFac(num-1)
}
return i
}

int controlFac(int num) {
if(num>=1 && num<=20) {
return num*controlFac(num-1);
}
else
printf("Error enter num between 1-20")
}

//int controlFac(int z) {
	//int i;
	//int factorial=1;
	//for(i=z; i>0; i--){
	//	factorial *= i;
	//}
	//return factorial
//}
