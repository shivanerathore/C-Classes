#include<stdio.h>
#include <stdlib.h>  
#include <time.h>

void smallBig(int *a, int *b, int *c);

int main(void) {
int x;
int y;
int z;
	
srand(time(NULL)); //seeding
	
x = rand()%1001;
y = rand()%1001;
z = rand()%1001;
printf("Smallest: x=%d\n",x);
printf("Middle: y=%d\n",y);
printf("Largest: z=%d\n",z);
smallBig(&x,&y,&z); //calling function
	
printf("Smallest: x=%d\n",x);
printf("Middle: y=%d\n",y);
printf("Largest: z=%d\n",z);

return 0;
} //end bracket


void smallBig(int *a, int *b, int *c) {
int large;
int small;
int middle;
	
//if a>b and a<c the largest is a and if b>c then the middle is b and c is the min
//else the max is a, middle is c and smallest is b
if(*a>*b && *a>*c) {
if(*b>*c) {
large=*a;
small=*c;
middle=*b;
}
else {
large=*a;
small=*b;
middle=*c;
}
}

//if b>a and b>c then max is b and if a>c then middle is a and min is c
//else max is b, min is a and middle is c
else if(*b>*a && *b>*c) {
if(*a>*c) {
large=*b;
small=*c;
middle=*a;
}
else {
large=*b;
small=*a;
middle=*c;
}
}
//else max is c and if a>b then max is c, middle is a and min is b
//else middle is b, max is c and min is a
else {
if(*a>*b){
large=*c;
small=*b;
middle=*a;
}
else {
large=*c;
small=*a;
middle=*b;
}		
}

*a=small;
*b=middle; 
*c=large;
}
