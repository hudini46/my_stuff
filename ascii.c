#include<stdio.h>
#include<stdlib.h>
int main ()
{	
        char n,q;
        loop:system("clear");
	printf("Enter Character\n");
	scanf("%c",&n);
	printf("The ASCII value of %c is %d\n",n,n);
	printf("Press Enter to proceed\n");
	getchar();
	getchar();
	q='q';
	while (n!=q)
	{	goto loop;
	}

return 0;
}
