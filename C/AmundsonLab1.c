/*Alexander Amundson Lab1 CS3335*/

#include<stdio.h>



int main()

{
  
	int firstTerm, commonDifference, numberOfTerms;
 
	int lastTerm, sum;
	float average; 
	
	printf("Enter first term: ");
  
        scanf("%d", &firstTerm);
	printf("Enter common difference: ");
 
	scanf("%d", &commonDifference);
        printf("Enter number of terms: ");
 
	scanf("%d", &numberOfTerms);

	lastTerm = firstTerm + (numberOfTerms - 1) * commonDifference;
	sum = numberOfTerms * (firstTerm + lastTerm) / 2;
	average = ((float) sum) / numberOfTerms;


	printf("\nThe last term is %d\n", lastTerm);
	printf("The sum of all the terms is %d\n", sum);
	printf("The average of all the terms is %.1f\n", average);


	return 0;

}
