#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	int a,b,c;
	char o;
	do
	{	
	system("clear");
	printf("ENTER NUMBER\n");
	scanf("%d",&a);
	b=1;
	c=1;
	while (b<=10)
	{ 
		/*c=c*b;*/
		printf("%d*%d=%d\n",a,b,a*b);
		b++;
	}
	printf("Press Enter to Continue\n");
	scanf("%c",&o);
	getchar();
	}while (1!=2);
return 0;	
}	
