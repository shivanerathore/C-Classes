#include <stdio.h>

int main(void) {
int c;
int i=0;
char str1[80]; //allocating 80 characters

puts("Enter your name: ");
scanf("%s",str1);
printf("The name you entered using scanf is %s\n ",str1);

while(getchar()!='\n');

puts("Enter name again: ");

//allowing scanf to read spaces
while((i<79) && ((c=getchar())!='\n')) {
str1[i++]=c;
}

str1[i]='\0';

puts("The string entered was: ");
puts(str1);

puts("Enter another string: ");
fgets(str1,80,stdin);
printf("You entered %s\n",str1);


return 0;
}
