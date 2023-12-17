//Shivane Rathore
//Hw5

#include <stdio.h>

int main(void) {
//declaring variables
int count = 0;
unsigned int num1, num2, num3, num4, num5;
unsigned int i=0, j=0, k=0, m=0, n=0;
unsigned int button1[2], button2[2], button3[2], button4[2], button5[2];

//prompting user for code
printf("Enter the five digit lab access code with a space between each number: ");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

//check the range and if the integer is outside the range prompt user again
while(num1 && num2 && num3 && num4 && num5 <00000 || num1 && num2 && num3 && num4 && num5 >99999) {
printf("Enter the five digit lab access code with a space between each number: ");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
}

//using if statements to set the users inputted numbers and setting them
//setting buttons for num1
if(num1 == 1 || num1 == 2) {
    button1[0] = 2;
    button1[1] = 1;
}
if(num1 == 3 || num1 == 4) {
    button1[0] = 4;
    button1[1] = 3;
}
if(num1 == 5 || num1 == 6) {
    button1[0] = 6;
    button1[1] = 5;
}
if(num1 == 7 || num1 == 8) {
    button1[0] = 8;
    button1[1] = 7;
}
if(num1 == 9 || num1 == 0) {
    button1[0] = 9;
    button1[1] = 0;
}

//setting buttons for num2
if(num2 == 1 || num2 == 2) {
    button2[0] = 2;
    button2[1] = 1;
}
if(num2 == 3 || num2 == 4) {
    button2[0] = 4;
    button2[1] = 3;
}
if(num2 == 5 || num2 == 6) {
    button2[0] = 6;
    button2[1] = 5;
}
if(num2 == 7 || num2 == 8) {
    button2[0] = 8;
    button2[1] = 7;
}
if(num2 == 9 || num2 == 0) {
    button2[0] = 9;
    button2[1] = 0;
}

//setting buttons for num3
if(num3 == 1 || num3 == 2) {
    button3[0] = 2;
    button3[1] = 1;
}
if(num3 == 3 || num3 == 4) {
    button3[0] = 4;
    button3[1] = 3;
}
if(num3 == 5 || num3 == 6) {
    button3[0] = 6;
    button3[1] = 5;
}
if(num3 == 7 || num3 == 8) {
    button3[0] = 8;
    button3[1] = 7;
}
if(num3 == 9 || num3 == 0) {
    button3[0] = 9;
    button3[1] = 0;
}

//setting buttons for num4
if(num4 == 1 || num4 == 2) {
    button4[0] = 2;
    button4[1] = 1;
}
if(num4 == 3 || num4 == 4) {
    button4[0] = 4;
    button4[1] = 3;
}
if(num4 == 5 || num4 == 6) {
    button4[0] = 6;
    button4[1] = 5;
}
if(num4 == 7 || num4 == 8) {
    button4[0] = 8;
    button4[1] = 7;
}
if(num4 == 9 || num4 == 0) {
    button4[0] = 9;
    button4[1] = 0;
}

//setting buttons for num5
if(num5 == 1 || num5 == 2) {
    button5[0] = 2;
    button5[1] = 1;
}
if(num5 == 3 || num5 == 4) {
    button5[0] = 4;
    button5[1] = 3;
}
if(num5 == 5 || num5 == 6) {
    button5[0] = 6;
    button5[1] = 5;
}
if(num5 == 7 || num5 == 8) {
    button5[0] = 8;
    button5[1] = 7;
}
if(num5 == 9 || num5 == 0) {
    button5[0] = 9;
    button5[1] = 0;
}

//looping through and printing
printf("The 32 different lab access codes are: \n");
for (i=0; i<2; i++) {
for (j=0; j<2; j++) {
for (k=0; k<2; k++) {
for (m=0; m<2; m++) {
for (n=0; n<2; n++) {
count = count + 1;
printf("%d) ",count);
printf("%d %d %d %d %d\n", button1[i], button2[j], button3[k], button4[m], button5[n]);
} //n
} //m
} //k
} //j
} //i

return 0;
} //end bracket
