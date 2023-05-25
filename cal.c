#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	float a,b,c;
	char q;
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
return 0;		  
}       
