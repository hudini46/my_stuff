#include<stdio.h>
struct student
{    
	char name[20];
	int class;
	int age;
	int marks;
	char grade;
};
int main ()
{
 	struct student s1;
	struct student s2;
	printf("Enter student Name/class/age/marks/grade:\n");
	scanf("%s %d %d %d %c",s1.name,&s1.class,&s1.age,&s1.marks,&s1.grade);
	printf("Enter student Name/class/age/marks/grade:\n");
	scanf("%s %d %d %d %c",s2.name,&s2.class,&s2.age,&s2.marks,&s2.grade);
	printf ("Students Details\n");
	printf("Name:%s\nClass:%d\nAge:%d\nMarks:%d\nGrade:%c\n",s1.name,s1.class,s1.age,s1.marks,s1.grade);
	printf("Name:%s\nClass:%d\nAge:%d\nMarks:%d\nGrade:%c\n",s2.name,s2.class,s2.age,s2.marks,s2.grade);
	
}	
