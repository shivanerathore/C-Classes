#include <stdio.h>

int* findValue(int[],int,int);

int main(void) {
int a[]={1,2,3,4,5,6,7,8};
int *ptr;

ptr=findValue(a,8,4);

if(ptr!=NULL) {
printf("found the value %d",*ptr);
}

return 0;
} //end bracket

int* findValue(int arr[], int n, int x) {
int i;
int *p;

for(i=0; i<n; ++i) {
if(arr[i]==value) {
p=&arr[i];
return p;
}
}
p=NULL;
return p;

} //function end
