//Shivane Rathore
//HW3

//including libraries
#include <stdio.h>
#include <stdlib.h>

int main(void) {
//setting variables
int month1;
int day1;
int month2;
int day2;
int difference1 = 0;
int difference2 = 0;

//geting user input for first date
printf("Enter the first month and day: ");
scanf("%d %d", &month1, &day1);

//checking if first month and first day are valid
//checking if the month entered is between 1-12
if (!(month1 >= 1 && month1 <= 12)) {
printf("The month you entered is invalid. Please enter a number between 1 - 12.");
}

//checking first day to be between 1-31 for the following months jan, match, may, july, aug, oct, dec)
if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) {
if (!(day1 >= 1 && day1 <= 31)) { //months with 31 days in 2022, if not in range gives invalid message
printf("The day you entered in invalid. Please enter a number between 1 - 31.");
}
} 
//checking for febuary with 28 days in 2022
else if (month1 == 2) {
if (!(day1 >= 1 && day1 <= 28)) { //if not in range gives invalid message
printf("The day you entered is invalid. Please enter a number between 1 - 28.");
}
} 
//checking first day to be 1-30 for the following months (april, june, sept, nov)
else if (month1 == 4 || month1 == 6 || month1 == 9 ||month1 == 11)
{
if (!(day1 >= 1 && day1 <= 30)) { //months with 30 days in 2022, if not in range gives invalid message
printf("The day you entered is invalid. Please enter a number between 1 - 30.");
}
}


//getting user input for the second date
printf("Enter the second month and day: ");
scanf("%d %d", &month2, &day2);

//checking if the second month and day are valid
//checking if the second month is between 1 - 12
if (!(month2 >= 1 && month2 <= 12)) {
printf("An entered month is invalid because a valid month should be between 1 and 12.");
}

//checking the second day to be between 1-31 for the following months (jan, match, may, july, aug, oct, dec)
if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12) {
if (!(day2 >= 1 && day2 <= 31)) { //months with 31 days in 2022, if not in range gives invalid message 
printf("The day you entered is invalid. Please enter a number between 1 - 31.");
}
} 
//checking for febuary with 28 days in 2022
else if (month2 == 2) { 
if (!(day2 >= 1 && day2 <= 28)) { //if not in range gives invalid message
printf("The day you entered is invalid. Please enter a number between 1 - 28.");
}
} 
//checking first day to be 1-30 for the following months (april, june, sept, nov)
else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11) {
if (!(day2 >= 1 && day2 <= 30)) { //months with 30 days in 2022, if not in range gives invalid message
printf("The day you entered is invalid. Please enter a number between 1 - 30.");
}
}


//getting the number of days between the first and second date.
//first date
for (int i = 1; i < month1; i++) { 
//if month is within these months it adds 31 to difference
if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
difference1 = difference1 + 31;
}
else if (i == 2) { //if month is febuary it adds 28 to difference
difference1 = difference1 + 28;
}
else { //otherwise it adds 30, for the months left
difference1 = difference1 + 30;
}
} //for
difference1 = difference1 + day1;

//second date
for (int i = 1; i < month2; i++) {
//if month is within these months it adds 31 to differenc
if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
difference2 = difference2 + 31;
}
else if (i == 2) { //if month is febuary it adds 28 to difference
difference2 = difference2 + 28;
}
else { //otherwise it adds 30, for the months left
difference2 = difference2 + 30;
}
} //for
difference2 = difference2 + day2;


//checking if the second date is before/earliier than the first date
if (difference2 - difference1 < 0) {
printf("The second date should not be before the first date");
}
else { //printing number of days between
printf("The number of days between the two dates is %d", (difference2 - difference1 - 1));
}

return 0;
} //main bracket


