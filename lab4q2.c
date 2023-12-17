#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//function prototype
int summ(int, int); 

int main(void) {
//variables
int dice1;
int dice2;
int dice3;
int dice4;
int roll;
int roll_2 = 0;   
int sum = 0;  

//seeding
srand(time(NULL));

dice1 = rand()%6+1;
dice2 = rand()%6+1;
roll = dice1+dice2;
printf("You rolled: %d\n" ,roll);

//if 7 or 11 is rolled they win
if(roll==7 || roll==11) {
printf("You Win! :)\n");
printf("\nSum Of Rolls: %d\n" ,summ(roll,roll_2)); 
return 0;
}

//if 2 or 3 or 12 is rolled they lose
else if(roll==2||roll==3||roll==12) {
printf("Sorry you lose :( \n");
printf("\nSum Of Rolls: %d\n" ,summ(roll,roll_2));
return 0;
}

else {
printf("Your point is: %d\n",roll);
do {
dice3 = rand()%6+1;
dice4 = rand()%6+1;
roll_2 = dice3+dice4;
sum = sum+roll_2;  //updating the sum
printf("You rolled: %d\n",roll_2);

//if the second roll equals first they win
if(roll_2==roll) {
printf("You Win! :)");
printf("\nSum Of Rolls: %d\n", summ(roll,sum));  
return 0;
}
}while(roll_2!=7); //if second roll doesnt equal 7 then they lose
printf("Sorry you lose :( "); 
printf("\nSum Of Rolls: %d\n", summ(roll,sum)); 
}

return 0;
} //end bracket

//summing rolls function
int summ(int roll1, int roll2){
return roll1+roll2; 
}