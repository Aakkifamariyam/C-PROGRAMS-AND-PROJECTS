#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int  argc,char* argv[])
{
	int m1,m2,m3,m4,m5,total;
	char name[20];
	float avg;
	if(argc!=7)
	{
		printf("usage: /a.,name,m1,m2,m3,m4,m5\n");
		return 0;
	}
	strcpy(name,argv[1]);
	m1= atoi(argv[2]);
	m2= atoi(argv[3]);
	m3= atoi(argv[4]);
	m4= atoi(argv[5]);
	m5= atoi(argv[6]);

	total=m1+m2+m3+m4+m5;
	avg= total/5.0;

	printf("\n-----STUDENT REPORT-----\n");
	printf("student name: %s\n",name);
	printf("Mark 1: %d\n",m1);
	printf("Mark 2: %d\n",m2);
	printf("Mark 3: %d\n",m3);
	printf("Mark 4: %d\n",m4);
	printf("mark 5: %d\n",m5);
	printf("Total: %d\n",total);
	printf("Average: %f\n",avg);

	if(m1<35 || m2<35 || m3<35 || m4<35 || m5<35)
	{
		printf("Result: Fail") ;
	}
	else
	{
		printf("Reslut: Pass\n");
		if(avg >=90)
			printf("Grade A+\n");
		else if(avg >=80)
			printf("Grade A\n");
		else if(avg>=70)
			printf("Grade B\n");
		else if(avg>=50)
			printf("Grade C\n");
		else
			printf("Grade D\n");
	}
	return 0;
}
