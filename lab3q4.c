//Shivane Rathore
//Lab3 Q4

#include <stdio.h>

int main(void) {
//initializing variables
int num;
int sum=0;
int temp;

//getting user input
printf("Enter a positive number: ");
scanf("%d",&num);

//while loop 
while(num>0) {
temp = num%10;
sum = sum + temp;
num = num/10;
}

//printing
printf("sum=%d",sum);

return 0;
} //end bracket
