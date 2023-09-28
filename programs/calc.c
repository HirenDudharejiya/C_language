#include<stdio.h>
#include<conio.h>

void add(int a, int b)
	{
		int total;
		total = a + b;
		printf("%d + %d = %d", a, b, total);
	}
	
void sub(int a, int b)
	{
		int total;
		total = a - b;
		printf("%d - %d = %d", a, b, total);
	}
	
void multi(int a, int b)
	{
		int total;
		total = a * b;
		printf("%d x %d = %d", a, b, total);
	}
	
void div(int a, int b)
	{
		int total;
		total = a / b;
		printf("%d / %d = %d", a, b, total);
	}
	
int main(){
	
	int ch;
	printf("Enter 1 for Addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		int num1, num2;
		printf("Enter two numbers for addition: ");
		scanf("%d%d", &num1, &num2);
		add(num1,num2);
	}
	else if(ch==2)
	{
		int num1, num2;
		printf("Enter two numbers substraction: ");
		scanf("%d%d", &num1, &num2);
		sub(num1,num2);
	}
	else if(ch==3)
	{
		int num1, num2;
		printf("Enter two numbers multiplication: ");
		scanf("%d%d", &num1, &num2);
		multi(num1,num2);
	}
	else if(ch==4)
	{
		int num1, num2;
		printf("Enter two numbers division: ");
		scanf("%d%d", &num1, &num2);
		div(num1,num2);
	}
}
	
	
