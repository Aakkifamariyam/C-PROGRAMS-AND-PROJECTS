#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char op;
	clrscr();
	printf("_ _ _ _ _SIMPLE CALCULATOR_ _ _ _ _");
	printf("\nEnter the value of A:");
	scanf("%d",&a);
	printf("Enter the operator: ");
	scanf(" %c",&op);
	printf("Enter the value of B: ");
	scanf("%d",&b);
	switch(op)
	{
	 case '+':
	  printf("Addition : %d + %d = %d",a,b,a+b);
	  break;
	 case '-':
	  printf("subraction : %d - %d = %d",a,b,a-b);
	  break;
	 case '*':
	  printf("multipleation: %d * %d = %d",a,b,a*b);
	  break;
	 case '/':
	  printf("division: %d / %d = %d",a,b,a/b);
	  break;
	 default :
	  printf("ERROR \ Invalid operator entered! \n");
	}
	getch();
	return;
}