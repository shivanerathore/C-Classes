#include <stdio.h>
#include <string.h>

int main(void) {
//intilialize variables
char str[100];
int i;
   
//user input
printf("Enter a string : ");
gets(str);

//for loop to see if its not the null character 
for(i=0; str[i]!='\0'; i++) {
if(str[i]>='a' && str[i]<='z') {
str[i] = str[i]-32; //subtracting to make uppercase
}
else if(str[i]>='A' && str[i]<='Z') {
str[i] = str[i]+32; //adding to make lowercase
}
}

//printing string
printf("%s",str);
return 0;
}