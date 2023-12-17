
#include <stdio.h>
#include <stdlib.h>

int factorial(int i);

int main(void) {
//variables
int num;
int i;
float e=1.0;
int temp;

//user input
printf("Enter a number 0-15: ");
scanf("%d",&num);

//if statement
if(num>0 && num<15) {
for(i=1; i<=num; i++) {
temp = factorial(i);
e = e+1.0/temp;
}
printf("%f",e);
}
else {
printf("INVALID");
}

return 0;
} //main bracket

//function
int factorial(int i) {
int j;
int fact=1;
for(j=1; j<=i; j++) {
fact = fact*j;
}
return fact;
}

