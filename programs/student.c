#include<stdio.h>
#include<conio.h>

struct student{
	
	int id;
	char name[10];
	int age;
	
};

int main()
{

	struct student s1;
	
	printf("Enter Student ID :- ",s1.id);
	scanf("%d",&s1.id);
	
	printf("Enter Student Name :- ",s1.name);
	scanf("%s",&s1.name);
	
	printf("Enter Student Age :- ",s1.age);
	scanf("%d",&s1.age);
	
	printf("\n\n");
	
	
	
}

int res(struct student s1)
{
		
	printf("%d\t",s1.id);
	printf("%s\t",s1.name);
	printf("%d\t",s1.age);
	
}



