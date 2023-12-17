//Write a C program that takes 2 command line arguments (filename & character)
//Print to screen the number of times the character appears in the file.

#include <stdio.h>
#include <stdlib.h>

//argc=numOfargs, and array pointing to command line
int main(int argc, char *argv[]) {
//initializing variables
FILE *fp;
int count = 0;
int c;
char letter;

//checking the number of cla
if(argc!=3) {
	puts("Incorrect number of command line arguments");
	exit(1);
}

//opening file
if((fp=fopen(argv[1],"r"))==NULL) {
	puts("Could not open file");
	exit(1);
}

//getting the first letter of string
letter=argv[2][0];

//adding the number of character in the file
while((c=getc(fp))!=EOF) {
	if(c==letter) {
		count++;
	}
}

//printing the answer
printf("The file %s has %d characters\n","myfile.txt",count);

//closing file
fclose(fp);
	
return 0;
}
