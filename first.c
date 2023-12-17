//program that reads 2 integers from stdin
//and prints out the sum 

#include <stdio.h>

int main (void) {
//initizalizing variables
int x;
int y;
int z;

//user input for first
puts("Enter first integer: ");
scanf("%d", &x);

//user input for second
printf("Enter second integer: \n");
scanf("%d", &y);

//printing sum
z=x+y;
printf("sum=%d",z);
//printf("sum=%d",x+y);

return 0;
}

