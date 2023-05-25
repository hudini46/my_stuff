#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int a,b,c;

	/*a=10;
	b=3;
	c=a+b;*/

	system("clear");
	printf ("operator +\n");
	printf ("Enter Numbers Here\n");
	scanf ("%d%d",&a,&b);
	
	c=a+b;
	printf ("THE ANSWER IS\n");
	printf ("%d\n",c);

	printf ("press enter key to exit");
	getchar ();

}	
