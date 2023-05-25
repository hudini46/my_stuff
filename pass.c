#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int a;
	system("clear");
	printf("ENTER MARKS HERE\n");
	scanf("%d",&a);

	if (a>=40)
	{
		if (a<=100)	
		{	
			printf("Pass\n");
		}
		else 
		{	printf("Not Allowed\n");
		}
	}
	else
	{	
		if (a>=1)
		{	
			printf("Fail\n");
		}		
		else
		{	printf("Not allowed\n");
		}
	}
return 0;
}


