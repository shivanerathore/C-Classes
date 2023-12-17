#include <stdio.h>
#include <stdlib.h>

//creating a struct with 3 fields
typedef struct employee{
    char lastname[10];
    int age;
    float salary;
} Employee;

int main(void) {
Employee *ptr;
int num;
int i;

//getting user input
printf("Enter how many employees data you will enter: ");
scanf("%d",&num);

//dynamic memory allocation
ptr = (Employee*)malloc(sizeof(Employee)*num);

//getting user input using structure pointer
for(i=0; i<num; ++i) { 
    printf("Enter the employees lastname, age and salary: ");
    scanf("%s %d %f",(ptr+i)->lastname, &((ptr+i)->age), &(ptr+i)->salary);
}

//printing using structure pointer
for(i=0; i<num; ++i) {
    printf("%s %d %f\n",(ptr+i)->lastname, (ptr+i)->age, (ptr+i)->salary);
}

//freeing the memory
free(ptr);

return 0;    
}