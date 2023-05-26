#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	int x;
	float a,b,c;
	char q,j;
	x=2;
	do
	{
	system("clear");
	printf("ENTER ARITHMETICS!\n");
        scanf("%f%c%f",&a,&q,&b);
	switch (q)
	{	
	case '+' : c=a+b; printf("=%f\n",c); break;
	case '-' : c=a-b; printf("=%f\n",c); break;
	case '*' : c=a*b; printf("=%f\n",c); break;	   
	case '/' : c=a/b; printf("=%f\n",c); break;	   
	default : printf("cannot perfom function\n"); break;	   
	}
	printf("Press enter to continue...\n");
	scanf("%c",&j);
	getchar();
	x++;
        }while (x!=1);

	return 0;		  
}       
