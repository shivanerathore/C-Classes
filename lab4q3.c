#include<stdio.h>

//function protoype
void printDetails(int);

int main(void) {
//initializing variables
int amount;
int print;

//user input
printf("Enter an integer between 0-99: ");
scanf("%d",&amount);

//checking the number keeps asking
while (amount<0 || amount>99) {
	printf("Enter an integer betweeen 0-99: ");
	scanf("%d",&amount);
}

//calling function
printDetails(amount);

return 0;
} //main bracket


//print and finding the values
void printDetails(int amount) {
int quarters;
int dimes;
int nickels;
int pennies;
int left;

//quarters
quarters = amount/25;
left = amount%25;

//dimes
dimes = left/10;
left = left%10;

//nickels
nickels = left/5;
left = left%5;

//pennies
pennies = left;

if(quarters!=0) {
printf("%d quarters\n",quarters);
} 

if(dimes!=0) {
printf("%d dimes\n",dimes);
}

if(nickels!=0) {
printf("%d nickels\n",nickels);
}

if(pennies!=0) {
printf("%d pennies\n",pennies);
}

} //end bracket