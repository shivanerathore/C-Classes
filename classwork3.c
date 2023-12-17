#include <stdio.h>

//function protocols
int reverseBit(int); 
void displayBit();

int main(void){
//initializing variables
int c;
int ans;

//user input
puts("Ener a character: ");
c=getchar();

ans=reverseBit(c);
printf("The letter %c is %d backwards",c,ans);
	
return 0;
} //end bracket


//function
int reverseBit(int c){
int i, mask=128,temp,back=0;
for(i=0; i<8; ++i){
	temp=mask&c;
	temp=temp>>(7-i);
	back+=temp;
	c=c<<1;
}

return back;
} //function end
