#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000 //preprosessor 

int main(void) {
//initializing variables
int i;
float x, y;
int counter=0; 
float calc;
   
srand(time(NULL));  //seeding
    
for(i=0; i<SIZE; i++) {
x = (float)rand()/RAND_MAX*2-1; //getting random x (between -1 & 1)
y = (float)rand()/RAND_MAX*2-1; //getting random y (between -1 & 1)
if(x*x+y*y<=1) { //checking to see if point is within circle
counter++; //if within circle, inc
}
}
 
//calculating pi using formula
calc = (4.0*counter)/SIZE;

//printing
printf("X = %f\n",x);
printf("Y = %f\n",y);
printf("PI = %f\n",calc);

return 0;
}