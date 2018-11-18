 /* 
Program Name: Program1.c 
Programmer: Alexander Amundson
Class: CS 3335 
HW: 03
Problem: 01
*/ 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char input[80];
	int i=0;
	int shift;
	int ascii;
	char message;
	
	printf("Enter message to be encrypted: ");
	scanf("%[^\n]", &input);
	printf("\nEnter shift amount (1-25): ");
	
	scanf("%d", &shift);
	printf("Encrypted message: ");
 	while( i < 80){	
			if ( input[i] == 0){break;}

			if (input[i] > 89 ) {
	                  			ascii = ((int)input[i] -97 + shift) % 26 + 97;
				message = (char)(ascii);
			if (message == 'U'){
		        	         printf(" "); i++; continue;}
  			printf("%c", message);
		
 	                  		i++;} else {
				ascii = ((int)input[i] -65 + shift) % 26 + 65;
				message = (char)(ascii);
				if (message == 'U'){
		        	        		 printf("Capital "); i++; continue;}
  				printf("%c", message);
				i++;
			}//end of if else statement
		
 	}//end of while loop	

	return 0;
}//end of main method