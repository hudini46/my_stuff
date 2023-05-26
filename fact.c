#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	unsigned int n;
	 int	i,j;
	 long int fact;
	char x;
	j=2;
	do
	{	
	system("clear");
	printf("ENTER VALUE\n");
	scanf("%d",&n);
	i=1;
	fact=1;
	while (i<=n)
	{	
		fact=fact*i;
		i++;
	}
		printf("=%ld\n",fact);
		printf("press enter to continue");
		scanf("%c",&x);
		getchar();
	        j++;
	}while (j>1);	
return 0;
}	
