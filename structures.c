#include <stdio.h>

//structure
struct Fraction {
	int numerator;
	int denominator;
};

//function prototypes
void print_fraction(struct Fraction);
struct Fraction mult_fraction(struct Fraction,struct Fraction);


int main(void) {
	//3 structures
	struct Fraction myFraction;
	struct Fraction anotherFraction;
	struct Fraction mFraction;
	
	//assigning values
	myFraction.numerator = 4;
	myFraction.demoninator = 8;
	anotherFraction.numerator = 1;
	anotherFraction.denominator = 3;
	
	//printing
	print_fraction(myFraction);
	print_fraction(anotherFraction);
	
	//multiplying and printing (passing structures as parameters)
	mFraction = mult_fraction(myFraction,anotherFraction);
	print_fraction(mFraction); 
	
	return 0;	
}

//function definition to print the fraction 
void print_fraction(struct Fraction f) {
	printf("%d/%d\n",f.numerator,d.denominator);
}

//function definition to do multiplication of the fractions
struct Fraction mult_fraction(struct Fraction f1, struct Fraction f2) {
	struct Fraction ans; 
	ans.numerator = f1.numerator * f2.numerator; //mult top
	ans.denominator = f1.denominator * f2.denominator; //mult bottom
	return ans; //returning the answer
}


