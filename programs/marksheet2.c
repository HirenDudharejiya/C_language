#include<stdio.h>
#include<conio.h>

struct marks
{
	int id;
	char name[10];
	int marks[5];
};

int main()
{
	
	int i;
	
	struct marks s1 ={1,"Hiren",{67,74,89}};
	struct marks s2 ={2,"Rahul",{70,87,69}};
	struct marks s3 ={3,"Mira",{89,85,96}};
	struct marks s4 ={4,"Bhavika",{86,78,80}};
	
	printf("%d\t",s1.id);
	printf("%s\t",s1.name);
	
	for(i=0;i<3;i++)
	{
		printf("%d\t",s1.marks[i]);
	}
	printf("\n");
	
	
	printf("%d\t",s2.id);
	printf("%s\t",s2.name);
	
	for(i=0;i<3;i++)
	{
		printf("%d\t",s2.marks[i]);
	}
	printf("\n");
	
	
	printf("%d\t",s3.id);
	printf("%s\t",s3.name);
	
	for(i=0;i<3;i++)
	{
		printf("%d\t",s3.marks[i]);
	}
	printf("\n");
	
	
	printf("%d\t",s4.id);
	printf("%s\t",s4.name);
	
	for(i=0;i<3;i++)
	{
		printf("%d\t",s4.marks[i]);
	}
	printf("\n");
	
}
