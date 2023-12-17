//a - define structure with unsigned int (partNumber) and char array (partName) with values 
//25 characters (including null char)
typedef struct part {
unsigned int partNumber;
char partName[25];
};

//b - define part to be a synonym for struct part
typedef struct part {
unsigned int partNumber;
char partName[25];
}Part;

//c - part 
Part a, b[10], *ptr;

//d
scanf("%u %s", &a.partNumber, &a.partName);

//e
strcpy(b[2].partName,a.partName);

//f
ptr=b;

//g
ptr = ptr+2;
printf("%u\n",ptr->partNumber);
printf("%s\n",ptr->partname);


