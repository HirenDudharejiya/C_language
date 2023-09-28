c#include<stdio.h>
#include<conio.h>

struct marksheet{
	
	int id;
	char name[10];
	int marks[10];
	
};

int main(){
	
	int i;
	
	struct marksheet s1={1,"hiren",{33,45,50}};
	struct marksheet s2={2,"rahul",{45,63,48}};
	
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
	
	
	
}
