//write a c program that prompts the user for the package and the hours
//output the cost
//packageA = 9.95 month for 10 hours, 2.00 each hour over 10
//packageB = 13.95 a month for 20 hours, 1.00 each hour over 20
//packageC = 19.95 month, unlimited


#include <stdio.h>

int main (void) {
char letter;
int hours;
float total;

printf("Enter which letter package you want: ");
scanf("%c", &letter);

printf("Enter how many hours you would like to use: ");
scanf("%d", &hours);

switch (letter) {
//if they enter lowercase or uppercase A
case 'a':
case 'A':
printf("You selected $9.95 per month with 10 hours and $2.00 extra per hour \n");
total = 9.95;
if (hours > 10) {
total = total + (hours - 10) * 2;
}
printf("total = %.2f",total);
break;


case 'b':
case 'B':
printf("You selected $13.95 per month with 20 hours and 1.00 extra per hour \n");
total = 13.95;
if (hours > 20) {
total = total + (hours - 20) * 1;
}
printf("total = %.2f",total);
break;


case 'c':
case 'C':
printf("You selected unlimited for $19.95. \n");
total = 19.95;
printf("total = %.2f",total);
break;

default: 
printf("Invalid package letter.");

} //end switch


return 0;
} //main bracket
