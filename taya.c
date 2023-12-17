#include <stdio.h>
int factorial(int);
float calculate;
int main (void){
int n,i,x,e=1;
  printf("Enter a number between 0 and 15 ");
  scanf("%d", &n);
  if (n>0 || n<15){
    x=factorial(i);
    printf(factorial(i)="%d\n",x);}
  else
    printf("Ending program\n ");
return 0;
}

int factorial(int z){
  int i;
  int factorial=1;
  for (i=z; i>0; i--)
    factorial*=i;
  return factorial;}
