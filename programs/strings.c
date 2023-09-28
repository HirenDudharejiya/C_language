//strcpy
//strcat
//strcmp
//strlwr
//strupr
//strrev
//strlen
//strcmp

#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10]={"Hello"};
	char b[10]={"World"};
	
	printf("Len :- %d\n\n",strlen(b));
	
	printf("Uper Case :- %s\n\n",strupr(a));
	
	printf("Uper Case :- %s\n\n",strupr(b));
	
	printf("Lower Case :- %s\n\n",strlwr(a));
	
	printf("Lower Case :- %s\n\n",strlwr(b));
	
//	printf("Merge :- %s\n\n",strcat(a,b));
	
//	printf("Reverce :- %s\n\n",strrev(a));
	
	printf("copy :- %s\n\n",strcpy(b,a));
	
	printf("compare :- %d\n\n",strcmp(a,b));
	
}


