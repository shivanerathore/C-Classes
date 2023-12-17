#include<stdio.h>    
#include<stdlib.h>  

int main(void) {  
int matrix1[2][2];
int matrix2[2][2];
int multiply[2][2];
int i,j,k;

//getting first matrix
printf("Enter the elements for the first matrix: \n");    
for(i=0; i<2; i++) {    
for(j=0; j<2; j++) {    
scanf("%d",&matrix1[i][j]);    
}    
}    

//getting second matrix
printf("Enter the elements for the second matrix: \n");    
for(i=0; i<2; i++) {    
for(j=0; j<2; j++) {    
scanf("%d",&matrix2[i][j]);    
}    
}    
    
printf("Multiplication of two matrices: \n");    
for(i=0; i<2; i++) {    
for(j=0; j<2; j++) {    
multiply[i][j]=0;    
for(k=0; k<2; k++) {    
multiply[i][j] = multiply[i][j] + matrix1[i][k] * matrix2[k][j];  
}    
}    
}    

//printing multiplied matrix
for(i=0; i<2; i++) {    
for(j=0; j<2; j++) {    
printf("%d\t",multiply[i][j]);    
}    
printf("\n");    
}    


return 0;  
}  //end bracket