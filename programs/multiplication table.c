#include <stdio.h>
#include <conio.h>

int main(){
	
   int i, num;
   
   /* Input a number to print table */
   
   printf("Enter number to print table: ");
   scanf("%d", &num);
   for(i=1; i<=10; i++){
      printf("%d * %d = %d", num, i, (num*i));
   }
   
   return 0;
}
