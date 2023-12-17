#include <stdio.h>
#include <string.h>

int main(void) {
//initializing variables
char date[100];
int i;
int space=0;
int length;

//user input
printf("Enter a date: ");
fgets(date,100,stdin);

//if first and swcond charater are ja then (1-january) else if the third character is n then (6-june) otherwise its july.
if(date[0]=='J' || date[0]=='j') {
if(date[1]=='a')
printf("01");
else if(date[2]=='n')
printf("06");
else
printf("07");
}
//if the first character is f then prints (2-febuary)
else if (date[0]=='F' || date[0]=='f')
printf("02");
//if first character and third is r then (3-march) otherwise (5-may)
else if (date[0]=='M' || date[0]=='m') {
if(date[2]=='r')
printf("03");
else
printf("05");
}
else if(date[0]=='A' || date[0]=='a') //august
printf("08");
else if (date[0]=='S' || date[0]=='s') //september
printf("09");
else if (date[0]=='O' || date[0]=='o') //october
printf("10");
else if (date[0]=='N' || date[0]=='n') //november
printf("11");
else if (date[0]=='D' || date[0]=='d') //december
printf("12");

length=strlen(date); //getting length of string

//print remaining string as it is but replace ', ' with '/'
for(i=0; i<length; i++) {
if(date[i]==' ' && space==0)
space=1; //space equals 1 when first space is found
if(space==1) { //when flag is 1
if(date[i]==',') {
	continue;
}
//print slashes for the spaces
else if(date[i]==' ')
printf("/");
else
printf("%c",date[i]); 
}
}
    
return 0; 
} //end bracket
