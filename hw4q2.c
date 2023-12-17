//Shivane Rathore
//HW4 Question 2

#include <stdio.h>

int main(void) {
//initializing variables
int option;
int managerSal;
int hourSal;
int workedHours;
int overtime;
int otPay;
int salary;
int commSal;
int grossSales;
int pieceSal;
int itemsProd;
int itemPay;

//user input
printf("Manager = 1, Hourly Worker = 2, Commission Worker = 3, PieceWorker = 4\n");
scanf("%d",&option);

//switch statement for options
switch(option) {
	
//managers (who receive a fixed weekly salary)
case 1:
printf("Enter Managers fixed weekly salary: ");
scanf("%d",&managerSal);
printf("Managers salary = %d\n",managerSal);
break;

//hourly workers (who receive a fixed hourly wage for up to the first 40 hours 
//they work an "time and a half" for overtime hours worked)
case 2:
printf("Enter the hourly workers salary: ");
scanf("%d",&hourSal);
printf("Enter number of hours worked: ");
scanf("%d",&workedHours);
//seeing if they worked over 40 hours (overtime)
if (workedHours>40) {
overtime = workedHours-40;
otPay = overtime * hourSal;
salary = otPay + (40*hourSal); 
printf("Hourly worker salary = %d\n",salary);
}
else { //otherwise gives regular
salary = workedHours * hourSal;
printf("Hourly worker salary = %d\n",salary);
}
break;

//commission workers (receive $250 plus 5.7% of their gross weekly sales)
case 3:
printf("Enter commission worker's gross sales for the week: ");
scanf("%d",&grossSales);
commSal = 250 + (grossSales*0.057);
printf("Commission worker salary = %d\n",commSal);
break;

//pieceworkers (who receive a fixed amount of money for each of the items they produce)
case 4:
printf("Enter pieceworker number of items produced: ");
scanf("%d", &itemsProd);
printf("Enter pieceworker pay per item: ");
scanf("%d",&itemPay);
pieceSal = itemsProd*itemPay;
printf("Pieceworker salary = %d\n",pieceSal);
break;

//default not an option
default:
printf("Please enter a valid option\n");
}//switch bracket

return 0;
} //end bracket 

