#include<stdio.h>
#include<conio.h>

int sub(int a,int b){
	
	printf("%d - %d = %d",a,b,(a-b));
	
	return a-b;
}

int main(){
	
	sub(10,5);
	
	return 0;
	
}
