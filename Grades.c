#include<stdio.h>
#include<stdlib.h>
int main ()
{	int a;
	system("clear\n");
	printf("Enter Marks\n");
	scanf("%d",&a);
        if      (a>100)
	{	
		printf("Not allowed\n");
	}		
	else if (a==100)
	{
		printf("A+\n");
	}
	else if (a>=90)
	{
		printf("A\n");
	}
	else if (a>=80)
	{
		printf("A-\n");
	}
	else if (a>=70)
	{
		printf("B+\n");
	}
	else if (a>=60)
	{	
		printf("B\n");
	}
	else if (a>=50)
	{	
		printf("B-\n");
	}
	else if (a>=40)
	{	
		printf("C+\n");
	}
	else if (a>=30)
	{	
		printf("C\n");
	}
	else if (a>=20)
	{	
		printf("C-\n");
	}
	else if (a>=10)
	{	
		printf("D+\n");
	}
	else if (a>=0)
	{	
		printf("FAIL\n");
	}
	else 
	{	
		printf("Not Allowed\n");
	}
 
	return 0;
} 
