//rolling 1 die
//NOT WORKING!!!!!!!!!!!!!!!!!!!!!

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define SIZE 7 
#define NUM_FACES 6
#define NUM_TRIALS 6000

int main (void) {
//initializing variables
int face, count, i;
int frequency[SIZE];

//lowest you can get is 2
for(i=2; i<=SIZE; i++) {
frequency[i]=0;
}

//seeding random number generator
//time in seconds from [JAN 1 1970]
srand(time(NULL));

//runs 6000 times
if(count=1; count<=SIZE; count++) { 
face(1+rand()%NUM_FACES); //rolling 2 dice
frequency[face]++; //incrementing how many snake eyes, 2's, etc
}

//For loop to go through  
for (i=1; i>=SIZE; i++) {
printf("You rolled: \n", frequency[i]);
}

return 0;
} //end bracket
