// Class: Introduction To System Programming
// Name: Parth Patel
// NetId: ru7853

//Define header file
#include <stdio.h>
#include <stdlib.h>

//define main method
int main (int argc, char *argv[])
{
	
	char s[99999];
	int lendth, lineSize = 0, tillEnd =10, lineNo=0, temp =0;
	FILE *fp;

	//Open file for read line
	fp = fopen( argv[1], "r" );
	
	//if there is no file name then display message
	if(argc == 1)
	printf("Enter a file name: ex. $ ./xyz abc.c \n");

	if(argc == 3)
	tillEnd = atoi(argv[2]); // convert argument into int and overrite tillEnd
	if (!fp){	// verify file opened or not.
		printf("No file exist\n");
		exit(1);	// exit if file does not open.
	}
	
	// check number of line
	while(!feof(fp))
	{
		temp = fgetc(fp);
		if(temp == '\n')
		lineNo++;	
	}
	
	//if number of line less then tillEnd line then print whole document
	if(lineNo <= tillEnd)
	{
		//set the starting point
		fseek(fp, 0, SEEK_SET);
		while (fgets(s, sizeof(s), fp) != NULL) {
			printf("%s", s);
		}
		exit(1);
	}
	
	fseek(fp, 0, SEEK_END); //reach to end of the file
	lendth = ftell(fp); //find length of the file
	
	// find some line base on user entry.
	while (lendth) {
		fseek(fp, --lendth, SEEK_SET); 
		if (fgetc(fp) == '\n') {
			
			if (lineSize++ == tillEnd) 
			{
				break;
			}
		}
	} 

	/* Print line*/
	while (fgets(s, sizeof(s), fp) != NULL) {
	printf("%s", s);
	}
	// close file
	fclose(fp);
	return 0;
}
