#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("data.txt","w");
	fprintf(fp,"C is very interesting programming language.\nit hels to developlogical thinking and problem solving skills.\nI was intersted in coding .\nLearning C is not just about writing code it is also about developing logical thinking \nand finding solutions to problems in an efficient way.\nIt helps us understand how to write instructions for a computer and how to solve problems through programming.  ");
	fclose(fp);

	fp =fopen("data.txt","r");
	while ((ch =fgetc(fp)) !=EOF)
		{
		printf("%c",ch);
		}
	fclose(fp);
	
	fp=fopen("data.txt","a");
	fprintf(fp,"\nthis class helped us to learn about the basics of c programming language in an easyway with real time examples.\nI understood Arrays, pointers ,functions very well .\nSir thought us good but then it was a little bit confusing.\nWe also had a lab session which was helpfull for solving programs and understand it clearly .\nOverall it was agood learning experience.  ");
	fclose(fp);
	return 0;
}
