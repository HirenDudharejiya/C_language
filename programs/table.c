#include<stdio.h>
#include<conio.h>

int main() {
	int num, i;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("Table of %d:\n ", num);
	for(i=1; i<=10; i++) {
		printf("%d X %d = %d\n", num, i, num*i);
	}
	return 0;
}
