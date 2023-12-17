//Write a C program that reads one file and writes the contents to another removing
//the vowels.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //to lower

//function prototype
int isVowel(int);

int main(int argc, char *argv[]) {
//initializing variables
FILE *finp;
FILE *fout;
int c;

//checking command line arguments
if(argc!=3) {
	puts("Incorrect number of command line arguments");
	exit(1);
}

//opening file to read
if((finp=fopen(argv[1],"r"))==NULL) {
	puts("Could not open file");
	exit(1);
}


//opening the file to write
if((fout=fopen(argv[2],"w"))==NULL) {
	puts("Could not open file");
	exit(1);
}

//getting character if not in file then check if not vowel, put character(c) in file fout
while((c = getc(finp))!= EOF) {
    if(!isVowel(c)) {
        fputc(c, fout);
    }
}

//closing files
fclose(finp);
fclose(fout);

return 0;
} //end


//function
int isVowel(int c) {
c = tolower(c);
if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u')) {
	return 1;
}
else {
	return 0;
}
} //end
