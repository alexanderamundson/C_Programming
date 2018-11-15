/*Alexander Amundson Lab2 CS3335*/

#include<stdio.h>



int main()

{
  
	int fibNum, count = 1,a = 1, b = 1, c = 2;
	
	printf("Enter an integer:  ");
  
                 scanf("%d", &fibNum);

	while (count < fibNum) {	
	   a = b;
	   b = c;
	   c = c + a;	
	   count++;
	}
	printf("The Fibonacci value for %d is: %d", fibNum, a );



	return 0;

}
