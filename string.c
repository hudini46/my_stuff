#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{ 
	char string[100],Marks[50];
        int l,o;
        loop:system("clear");
	printf("Enter string\n");
	fgets(string, sizeof(string), stdin);
	printf("Enter marks\n");
	fgets(Marks, sizeof(Marks), stdin);
	l=strlen(string);
	l=l-1;
	printf("You have entered:\n");
	puts(string);
	printf("\n%d Number of characters\n",l);
	getchar();
	system("clear");
	printf("\nPress\n1.To continue\n2.To copy\n3.To add\n4.Lower case\n5.Upper case\n");
	scanf("%d",&o);
	if (o==2)
	{ 
		strcpy(Marks,string);
		printf("You have copied:\n");
		puts(Marks);
		getchar();
	}
	if (o==3)
	{ 
		strcat(string,Marks);
		l=strlen(string);
		l=l-1;
		printf("new statement is:\n");
		puts(string);
		printf("\n%d Number of characters\n",l);
		getchar();
	}
	printf("press enter to continue\n");
	getchar();
	goto loop;
return 0;
}
