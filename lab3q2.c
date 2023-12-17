//Shivane Rathore
//Lab3 Q1

#include <stdio.h>

int main(void) {
//initializing
float count=30.0;
float sum=0.0;
int counter;

//for loop to get sum
for(counter=1; counter<=30; counter++) {
sum = sum + (counter/count);
count--;
} 

printf("sum=%f",sum);

return 0;
} //end bracket
