/*Alexander Amunson Lab3 CS3335*/

#include<stdio.h>

int main() {
     int input, count = 0;
     
     printf("Enter a number:  ");
     scanf("%d",  &input);

     for (int i = 2; i <= (input/2); i++) {
          if ((input % i) == 0) {
               printf("%d\n", i);
               count++;          
          }//end of if statement
     }//end of for loop
     
     printf("\nNumber %d has %d divisors\n", input, count);
    
     if (count < 1) {
          printf("This number is prime\n");
     }//end of if statement
     
     return 0;
}//end of main method



