//Shivane Rathore
//Lab3 Q3

#include <stdio.h>

int main(void) {
//initialize variables
int num;
int j,i;
char x='X';

printf("Enter a positve integer no greater than 15: ");
scanf("%d",&num);

while(num<=0 || num>15) {
printf("Enter a valid number: ");
scanf("%d",&num);
} //while 

for(int i=0; i<num; ++i) {
for(int j=0; j<num; ++j) {
printf("%c",x);
}
printf("\n");
}

return 0;
} //end bracket
