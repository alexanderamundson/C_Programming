 /* 
Program Name: Program1.c 
Programmer: Alexander Amundson
Class: CS 3335 
Lab: 07
*/ 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void RotateFourChars();
int main() {
	float scores[30];
	printf("%d", sizeof(scores);
	char input[4];
	
	
	printf("Enter four characters: ");
	scanf("%[^\n]", &input);
	RotateFourChars(input);

		

	return 0;
}//end of main method


RotateFourChars(char input[]) {
	char temp = input[0];
	int a=1;
for (int i=0; i< 4; i++){
 printf( input[ (idx + a) % 4 ];
 a++;
}	

	

}