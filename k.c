#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int leo[100],i,n;
        loop:system("clear");
	printf("Enter Number of entries\n");
	scanf("%d",&n);
	printf("Enter %d numbers:\n\n", n);
	for (i = 0; i < n; i++)
	{  
		scanf("%d",&leo[i]);
	}
	printf("Entered numbers:\n");
	for (i = 0; i < n; i++)
	{	
		printf("%d\t",leo[i]);
	}
	getchar();
	getchar();
	goto loop;
return 0;
}

