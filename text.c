#include <stdio.h>

int main(void) {
int num;
int packagePrice = 55;
float discount;
float total;

printf("Enter number of packages purchased: ");
scanf("%d", &num);

if (num < 10) {
total = packagePrice * num;
}
else if (num >= 10 && num <= 49) {
total = packagePrice * num;
discount = total * 0.2;
total = total - discount;
}
else if (num >= 50) {
total = packagePrice * num;
discount = total * 0.4;
total = total - discount;
}

printf("discount=%.2f\n", discount);
printf("total=%.2f\n", total);

return 0;
} //end bracket
