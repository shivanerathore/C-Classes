#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
int i,j,k;
int n=2;
float a[2][2],x[10],sum=0.0;

//printf("\nEnter the order of matrix: ");
//scanf("%d",&n);

printf("\nEnter the elements of augmented matrix row-wise:\n\n");
for(i=1; i<=n; i++) {
for(j=1; j<=(n+1); j++) {
printf("A[%d][%d] : ", i,j);
scanf("%f",&a[i][j]);
}
}

/* loop for the generation of upper triangular matrix*/
for(j=1; j<=n; j++) {
for(i=1; i<=n; i++) {
if(i>j) {
float c=a[i][j]/a[j][j];
for(k=1; k<=n+1; k++) {
a[i][k]=a[i][k]-c*a[j][k];
}
}
}
}

x[n]=a[n][n+1]/a[n][n];
    
/* this loop is for backward substitution*/
for(i=n-1; i>=1; i--) {
sum=0;
for(j=i+1; j<=n; j++) {
sum=sum+a[i][j]*x[j];
}
x[i]=(a[i][n+1]-sum)/a[i][i];
}
printf("\nThe solution is: \n");
for(i=1; i<=n; i++) {
printf("\nx%d=%f\t",i,x[i]); /* x1, x2, x3 are the required solutions*/
}
    
return(0);
} //end bracket