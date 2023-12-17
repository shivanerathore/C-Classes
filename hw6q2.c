#include <stdio.h>

float findPi(int); //function prototype

int main(void) {
//initializing variables
int n;
float pie;

//user input
printf("Enter an integer to calculate pi for: ");
scanf("%d",&n);
	
pie=findPi(n); //calling function
printf("PI = %f",pie);

return 0;
}

float findPi(int n){
int i;
float pie=0;
float count=1;

//count is incremented by 2 each loop
for(i=1; i<=n; i++) {
if(i%2==0) { //if i is odd then it subtracts (1/count) from pi and inc count by 2
pie = pie-(1/count);
count = count+2;
}
else { //otherwise it adds (1/count) to pi and inc count by 2
pie = pie+(1/count);
count = count+2;
}
}

pie = pie*4; //mult by 4
return pie;
}
