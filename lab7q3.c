#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
int i, j, k=0;
int zero=0, one=0, two=0, three=0, four=0, five=0, six=0;

//creating array
int **arr; //pointer to pointer
arr = (int**)malloc(5000*sizeof(int*)); //dynamic memory allocation

for(k=0; k<5000; k++) {
    arr[k] = (int*)malloc(5000*sizeof(int));
}

//seeding 
srand(time(NULL));

//getting random numbers from 0-6
for(i=0; i<5000; i++){
    for(j=0; j<5000; j++){
        arr[i][j] = rand()%7;
    }
}

//finding occurrences
for(i=0; i<5000; i++){
    for(j=0; j<5000; j++){
        if(arr[i][j]==0){
            zero++;
        }
        else if(arr[i][j]== 1){
            one++;
        }
        else if(arr[i][j]== 2){
            two++;
        }
        else if(arr[i][j]== 3){
            three++;
        }
        else if(arr[i][j]== 4){
            four++;
        }
        else if(arr[i][j]== 5){
            five++;
        }
        else{
            six++;
        }
    }
}

//printing results
printf("0 appears %d\n",zero);
printf("1 appears %d\n",one);
printf("2 appears %d\n",two);
printf("3 appears %d\n",three);
printf("4 appears %d\n",four);
printf("5 appears %d\n",five);
printf("6 appears %d\n",six);

return 0;
}