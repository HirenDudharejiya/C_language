#include<stdio.h>
#include<conio.h>
#define pi 3.14

int area(float r){
	
	printf("area = %f",(pi*r*r));
	
	return pi*r*r;
	
}

int main(){
	
	area(4);
	return 0;
	
}


