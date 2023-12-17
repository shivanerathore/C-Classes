#include <stdio.h>
#include <string.h>

int main(void) {
//initialize variables
char str[50];
int a=0, e=0, I=0, o=0, u=0;
int digit=0;
int i;
int len;

//user input
puts("Enter a string of characters enter EOF to end the string ");
scanf("%49[^EOF]",str);

len=strlen(str); //getting length of string

for(i=0; i<len; i++) {
if(str[i]=='a') {
a++;
}
else if(str[i]=='e') {
e++;
}
else if(str[i]=='i') {
I++;
}
else if(str[i]=='o') {
o++;
}
else if(str[i]=='u') {
u++;
}
else if(str[i]>='0' && str[i]<='9') { 
digit++;
} 
}

//printing
printf("%d a's\n",a);
printf("%d e's\n",e);
printf("%d i's\n",I);
printf("%d o's\n",o);
printf("%d u's\n",u);
printf("%d digits",digit);

return 0;
}//end