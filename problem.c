//write a c program that user is prompted for 3 integers seperated by a space
//and the program prints the biggest and the smallest

#include <stdio.h>

int main (void) {
int num1, num2, num3;

printf("Enter 3 numbers seperated by a space: ");
scanf("%d %d %d", &num1, &num2, &num3);

//largest number
if (num1>num2) {
if (num1>num3) {
printf("The largest number is: %d \n", num1);
}
else {
printf("The largest number is: %d \n", num3);
}
}
else if (num2>num3) {
printf("The largest number is: %d \n", num2);
}

//smallest number
if (num1<num2) {
if (num1<num3) {
printf("The smallest number is: %d \n", num1);
}
else {
printf("The smallest number is: %d \n", num3);
}
}
else if (num2<num3) {
printf("The smallest number is: %d \n", num2);
}

return 0;
} //main bracket


