#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int lengthRecursive(char inputstring[],int index);/*string length*/
void reversestring(char inputstring[]);/*reverse*/
int isPalindrome(char inputstring[]);/*paldimore*/
static int owen=100;
int main (int argc, char *argv[])
{ 
	if (argc != 3)
	{	
	printf("error: provide an input string and an operation choice.\n");
	}
	char *inputstring=argv[1];
	int operationchoice=atoi(argv[2]);
	printf("input string : %s\n",inputstring);
        printf("operation choice : %d\n",operationchoice);
	if (operationchoice == 1)
       	{
        int len = lengthRecursive(inputstring,0);/*string length*/
        printf("length of the string: %d\n", len);
        } else if (operationchoice == 2)
	{
		char *copyString = malloc(strlen(inputstring) + 1);
		if (copyString == NULL)
		{
			printf("Memory allocation failed.\n");
			return 1;
		}
		strcpy(copyString, inputstring);

	{ 
		printf("reversed string: ");/*reverse*/
	        reversestring(inputstring);
                printf("\n");
		free(copyString);
	}
	} else if (operationchoice == 3)
	{ 
		if (isPalindrome(inputstring))/*paldimore*/
		{
			printf("the string is a palindrome.\n");
		} else
		{
			printf("the string is not a palindrome.\n");
		}
	}  else	if (operationchoice == 4)
	{	
		printf(" Owen =%d\n",owen);
	} else	
       	{
	printf("invalid operation choice.\n");
        }
return 0;
}
int lengthRecursive(char inputstring[],int index)/*string length*/
{
       if (inputstring[index] == '\0')	
	{ 
		return 0;
	} else
	{
	return 1 + lengthRecursive(inputstring, index + 1);
	}
}	
void reversestring(char inputstring[])/*reverse*/
{ 
	int len = strlen(inputstring);
	for (int i = len - 1; i >= 0; i--)
	{ 
		printf("%c", inputstring[i]);
	}
}
int isPalindrome(char inputstring[])/*paldimore*/
{ 
	int len = lengthRecursive(inputstring,0);
	for (int i = 0; i < len / 2; i++)
	{
		if (inputstring[i] != inputstring[len - i - 1])
		{
		 	return 0;
		}
	}
return 1;
}
