
#include <stdio.h>

#define SIZE 5

void print_array(int[]);
void increment(int[]);
int find_square(int);

int main (void) {
int values[SIZE]={-17,8,9,0};
int m;

print_array(values); //calling functions
increment(values);
print_array(values);

m=find_square(values[1]);
printf("%5d",m);

return 0;
}

//function
void print_array(int x[]) {
int j;
for(j=0; j<SIZE; ++j) {
printf("%d",x[j]);
}
puts(" ");
}

void increment(int x[]) {
int j;
for(j=0; j<SIZE; ++j) {
x[j]++;
}
}

int find_square(int x) {
int j;
j = x*x;
return j;
}




