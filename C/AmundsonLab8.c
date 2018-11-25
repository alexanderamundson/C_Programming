 /* 
Program Name: lab8.c 
Programmer: Alexander Amundson
Class: CS 3335 
Lab: 08
*/ 
#include<stdio.h>


int euclid();
int main() {
	int n=0,m=0;
	printf("Enter two positive numbers: ");
	scanf("%d", &m);
	scanf("%d", &n);//m > n > 0
	
	printf("\nThe GCD is %d: ", euclid(m, n) );
	return 0;
}//end of main method


int euclid(int m, int n) {
	if ( (m % n) ==0) {
	           return n ;
	 }
	return (euclid(n, m%n));
}//end of euclid method	

	

