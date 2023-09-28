#include<stdio.h>
#include<conio.h>
 
int main()
	{
		int num, i;
		printf("Enter number: ");
		scanf("%d",&num);
		i=1;
		while(i<=10){
			printf("%d x %d = %d\n", num, i, num*i);
			i++;	
		}
		return 0;
	}

