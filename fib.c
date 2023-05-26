#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int i,a,b,n;
	long int c;
	a=0;
	b=1;
	do
	{	
	system("clear");
	printf("Enter No. of times to print\n");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for (i=3;i<=n;i++)
	{	
		c=a+b;
		printf("%ld",c);
	        a=b;
		b=c;
        }
	printf("\npress enter to continue...\n");
	getchar();
	getchar();
	}while (2!=1);
return 0;
}
