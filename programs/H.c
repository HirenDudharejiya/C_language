#include<stdio.h>

int main()
{
	int i,j;
	
	
	//H
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1) && (j==2 || j==3 || j==4))
			{
				printf(" ");
			}
			
			else if((i==2) && (j==2 || j==3 || j==4))
			{
				printf(" ");
			}
			else if((i==4) && (j==2 || j==3 || j==4))
			{
				printf(" ");
			}
			
			else if((i==5) &&(j==2 || j==3 || j==4))
			{
				printf(" ");
			}
			
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	// I
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1) && (j==1 || j==2 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==2) && (j==1 || j==2 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==3) && (j==1 || j==2 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==4) && (j==1 || j==2 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==5) && (j==1 || j==2 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else
			{
				printf("*");	
			}
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1) && (j==1 || j==5))
			{
				printf(" ");
			}
			
			else if((i==2) && (j==1 || j==3 ||j==4))
			{
				printf(" ");
			}
			
			else if((i==3) && (j==1 || j==3 ||j==4))
			{
				printf(" ");
			}
			
			else if((i==4) && (j==1 || j==5))
			{
				printf(" ");
			}
			
			else if((i==5) && (j==1 || j==3 ||j==4))
			{
				printf(" ");
			}
			
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	// E
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1) && (j==1))
			{
				printf(" ");
			}
			
			else if((i==2) && (j==1 || j==3 ||j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==3) && (j==1))
			{
				printf(" ");
			}
			
			else if((i==4) && (j==1 || j==3 || j==4 || j==5))
			{
				printf(" ");
			}
			
			else if((i==5) && (j==1))
			{
				printf(" ");
			}
			
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	
	// N 
	
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==1) && (j==2 || j==3 || j==4))
			{
				printf(" ");
			}
			
			else if((i==2) && (j==3 ||j==4))
			{
				printf(" ");
			}
			
			else if((i==3) && (j==2 ||j==4))
			{
				printf(" ");
			}
			
			else if((i==4) && (j==2 || j==3))
			{
				printf(" ");
			}
			
			else if((i==5) && (j==2 || j==3 ||j==4))
			{
				printf(" ");
			}
			
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
