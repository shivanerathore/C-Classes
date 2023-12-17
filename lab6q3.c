#include <stdio.h>
#include <string.h>
        
int main(void) {
//initialize variables
int i;
char str[70];
int len;

//user input
printf("Enter a string to reverse: ");
gets(str); //takes spaces and tabs

len=strlen(str); //getting length of string

//printing reversed string
for(i=len-1; i>=0; i--) {
printf("%c",str[i]);
}

return 0;   
} //end