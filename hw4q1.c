//Shivane Rathore
//HW4 Question 1

#include <stdio.h>

int main(void) {
//initializing variables
int num;
int i, j;
int summ=0;
int a[num]; //declaring array

//user input
printf("Enter the number of values you want to enter: ");
scanf("%d",&num);

//for loop
for(i=0; i<num; i++) {
printf("Enter number: ");
scanf("%d",&a[i]);
summ = summ+a[i];
}
   
//prints > 
for(i=0; i<num; i++) {
for(j=0; j<a[i]/5; j++) {
printf(">");
}
printf("\n");
}

//printing sum
printf("Sum = %d ",summ);

return 0;
} //end bracket