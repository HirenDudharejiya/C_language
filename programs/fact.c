#include<stdio.h>
#include<conio.h>

int fact(int n){
	
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main(){
	int res;
	res = fact(4);
	printf("%d",res);
}
