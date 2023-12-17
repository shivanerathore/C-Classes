#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//command line 
int main(int argc,char* argv[]) {
//initializing variables
unsigned short seed;
int taps[16];
int i=0, j;
int num;
  
//convering string to int
seed = atoi(argv[1]);

//checking to see if the number in command line is positive otherwise asks again
if (argc!=2 || atoi(argv[1]) < 0) {
printf("%d\n",argc);
printf("Enter a positive integer: \n");
}

//getting user input for taps and ending with -1
printf("Enter taps between 0-15 and end with -1: \n");

//loops until break
while (1) {
scanf("%d",&taps[i]);
if (taps[i]==-1) { //if the enter -1 ends
break;
}
else if (taps[i]<0 || taps[i]>15) { //validating that its between 0-15if not asks again
printf("Enter number between 0-15: \n");
}
i++; //inc i
} //while
  
//user input for number of random numbers
printf("Enter the number of random numbers to generate: \n");

//loops until break
while (1) {
scanf("%d",&num);
if (num>0) { //validating the number is positive greater than 0
break;
}
else { //asks again 
printf("Enter a valid number: \n");
}
} //while
 
//seeding
srand(time(NULL)); 

//generating the random numbers
printf("Random numbers: \n");

//nested for loops
for (j=0; j<num; j++) {
seed = seed^(seed>>taps[0]);
for (i=1; i<sizeof(taps); i++) {
seed = seed^(seed>>taps[i]);
}
printf("%d\n",seed);
}

return 0;
} //main bracket