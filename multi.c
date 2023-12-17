#include <stdio.h>

void printArray(int a[][3]);

int main(void) {
int array1[2][3] = {{1,2,3},{4,5,6}};
int array2[2][3] = {6,7,8,9,10,11};
puts("Values in array1 by row are");
printArray(array1);

return 0;
} //end bracket

void printArray() {
int i,j;

for(i=0; i<2; i++) {
for(j=0; j<3; j++) {
printf("%d",array1[i][j]);
}
printf("\n");
}

}//end bracket

