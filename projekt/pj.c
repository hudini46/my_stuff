#include<stdio.h>
#include<stdlib.h>
int main ()
{ 
	int Marks[1];
	int i,p,m,x,n,flag,temp,j;
	flag=0;
        loop:system("clear");
	printf("Number of Marks to be entered\n");
	scanf("%d",&n);
	printf("Enter Marks Here\n");
	for (i = 0; i<=n-1; i++)
	{
	       scanf("%d",&Marks[i]);		
        }
	printf("Marks Entered\n");
	for (i = 0; i<=n-1; i++)
	{ 
	       printf("%d\t",Marks[i]);
        }
        printf("\nOptions\n");
	printf("1.Insert\n");
	printf("2.Delete\n");
	printf("3.Search\n");
	printf("4.Sort\n");
	printf("5.Exit\n");
	scanf("%d",&x);
	while (x==1)
	{	
		 printf("Enter position to insert\n");
		 scanf("%d",&p);
                 printf("Enter Marks\n");
		 scanf("%d",&m);
		 p=p-1;
		 for (i=n-1; i>=p; i--)
		 {  
			 Marks[i+1]=Marks[i];
		 }
		 Marks[p]=m;
		 for (i = 0; i<=n; i++)
		 {	
			printf("%d\t",Marks[i]);
		 }
		 break;
	}
	
	while (x==2)
	{ 
		printf("Enter position to delete\n");
		scanf("%d",&p);
		p=p-1;
		for (i=p; i<=n-1; i++)
		{	
			Marks[i]=Marks[i+1];
		}
	        for (i = 0; i<=n-2; i++)
		{ 
			printf("%d\t",Marks[i]);
		}
		break;
	}
	
	while (x==3)
	{ 
		printf("Enter Marks to search for\n");
		scanf("%d",&m);
		for (i=0; i<n; i++)
		{
			if ( m==Marks[i])
			{		
			flag=1;
			break;
			}else
			{ 
				flag=0;
			}
		}
		        if (flag==1)
			{ 
				printf("Marks present\n");
			}else
			{ 
				printf("Marks Absent\n");
			}	
				break;
	}
	
	while (x==4)
	{ 
		 for (j=1; j<n; j++)
		 { 
			for (i=0; i<n-j; i++)
			{ 
				if  (Marks[i]>Marks[i+1])
		                { 
					temp=Marks[i];
					Marks[i]=Marks[i+1];
					Marks[i+1]=temp;
				}
			}	
                 }
		 for (i=0; i<n; i++)
		 { 
			printf("%d\t",Marks[i]);
		 }
		 break;
	}	 
    

	getchar();
        getchar();
	goto loop;
return 0 ;
}
