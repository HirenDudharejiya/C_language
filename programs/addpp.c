#include<stdio.h>

int add(int n)

{
	if(n==0)
		{
			return 0;
		}
	else if(n==1)
		{
			return 1;
		}
	else
		{
			return add(n-1) + add(n-2);
		}
}

int main(){
	
	int res,i;
	
	for(i=1;i<10;i++)
	{
	
	res = add(i);
	
	printf("%d\t",res);
	}
	
	
}

