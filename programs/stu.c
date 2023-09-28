#include<stdio.h>
#include<conio.h>

struct stu{
	
	int id;
	char name[10];
};

int main(){
	 struct stu s1={1,"hiren"};
	 struct stu s2={2,"rahul"};	 
	 
	 printf("%d\t",s1.id);
	 
	 printf("%s\n",s1.name);
	 
	 printf("%d\t",s2.id);
	 
	 printf("%s\n",s2.name);
}
