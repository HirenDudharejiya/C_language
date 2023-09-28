#include<stdio.h>
#include<conio.h>

int div(int a, int b){
	
	printf("%d / %d = %d",a,b,(a/b));
	
	return a/b;
	
}

int main(){
	
	div(10,2);
	
	return 0;
}
