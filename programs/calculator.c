#include<stdio.h>
#include<conio.h>

int main(){
	int ch;
	printf("Enter 1 for Addition :\nEnter 2 for substraction :\nEnter 3 for Multiplication :\nEnter 4 for Division :\n");
	scanf("%d", &ch);
	
	int num1, num2;
	printf("Enter numbers: ");
	scanf("%d%d",&num1,&num2);
	
	switch(ch){
		
		case 1: printf("%d + %d = %d",num1,num2,num1+num2);
				 break;
		
		case 2: printf("%d - %d = %d",num1,num2,num1-num2);
				 break;
		
		case 3: printf("%d x %d = %d",num1,num2,num1*num2);
				 break;
				 
		case 4: printf("%d / %d = %d",num1,num2,num1/num2);
				 break;
	}
	
	return 0;
	
}

