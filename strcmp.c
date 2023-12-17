#include <stdio.h>
#include <string>

int main(void) {
int x;
char str1[]="Hello Gang";
char str2[]="Hello World";

x=strcmp(str1,str2);
printf("%d\n",x);

x=strcmp(str1,str2);
printf("%d\n",x);

x=strcmp(str2,str1);
printf("%d\n",x);

return 0;
}
