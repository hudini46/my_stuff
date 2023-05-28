#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	int n;
        loop:system("clear");
	printf("Enter Age\n");
	scanf("%d",&n);
	if (n>=18)
	{	
		if (n<100)
		{	
		        printf("Eligible Voter\n");
		}else
			printf("Too old\n");
	}else if (n>0)
	{      	
		printf("Non-voter\n");
	}else
	{
		printf("Exiting...\n");
	}
	getchar();
	getchar();
	while (n>0)
	{	
	       goto loop;
	}       
	      
return 0;
}

