/*
   CH-230-B
   a8_p11.c
   Aarshika Singh
   aa.singh@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
/*Including libraries*/

int main()
{
	int n;
	scanf("%d", &n);
	char **fileread;
	char buffer[64];
	/*Declaring buffer*/
	FILE *fp2;
	fileread=(char**)malloc(sizeof(char*)*n);
	if(fileread==NULL)
	{
		exit(1);
	}
	/*Dynamically allocating memory*/
	printf("Concating the conent of %d files...\n", n);
	printf("The result is:\n");
	int j;
	for (j = 0; j < n; j++)
	{
		fileread[j]=(char*)malloc(sizeof(char)*100);
		if(fileread==NULL)
		{
			exit(1);
		}
		scanf("%s",fileread[j]);
	}
	/*Scanning the names of files*/
	FILE *fp;
	fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		printf("File not found!\n");
		exit(1);
	}
	/*Opening the output file in writing mode*/
	for(j = 0; j < n ; j++)
	{
		fp2 = fopen(fileread[j],"r");
		if(fp2 == NULL)
		{
			printf("File not found");
			exit(1);
		}
		/*Opening the input files in reading mode*/

		while (!feof(fp2))
		{
			int a = fread(buffer,1,sizeof(buffer),fp2);
			printf("%s", buffer);
			fwrite(buffer,a,1, fp);
			
		}
		fflush(stdout);
		/*Writing the content of the files concatenated in the output 
		file*/
		printf("\n");
		fprintf(fp2,"%s","\n");
		fclose(fp2);
		/*Closing the input files in loop*/
	}
		
	fclose(fp);
	/*Closing the output files*/
	printf("The result was written into output.txt\n");
	return 0;
}
	

