//Shivane Rathore
//HW4 Question 4

#include <stdio.h>

int main(void) {
int num; //non negative integer
int base; //2,4,8,16
int temp;
int convert;
int digit;
int count=0;
int i;
char a[100];

//user input
printf("Enter decimal integer: ");
scanf("%d",&num);
printf("Enter base (2,4,8,16): ");
scanf("%d",&base);

//temp variable
temp=num;

//checking base then converting
if(base==2 || base==4 || base==8 || base==16) {
do { 
convert = temp%base;   
digit = '0'+convert; 
if(digit>'9')
digit = digit+7;
a[count] = digit;
count++;
temp = temp/base;
} 
while(temp!=0);  //repeate this do while loop until p non zero.
printf("The base %d of num %d = ",base,num);
for(i=count-1; i>=0; --i)  //display coverted number
printf("%c",a[i]);
} //if bracket

//else base not valid
else {
printf("Enter valid base");
}

return(0);
} //main bracket
