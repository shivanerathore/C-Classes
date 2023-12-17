//Shivane Rathore
//Lab 4 Q1

#include <stdio.h>

//#define START 0
//#define END 10

int main(void) {
//initializing variables
int end=10;
int counter;

printf("Number   Square    Cube\n");

//for loop
for (counter=0; counter<=end; counter++) {
printf("%d          %d         %d\n", counter, (counter*counter), (counter*counter*counter));
}

return 0;
} //end bracket
