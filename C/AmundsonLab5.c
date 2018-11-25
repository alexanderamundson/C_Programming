//Alexander Amundson Lab5 CS3335

#include<stdio.h>
int Minimum(int values[]);
int Sum_Of_Cubes(int a) ;//function declarations

int main() {
	int values[3], min;
	printf("Input three positive integer values:\n");//three ints seperated by spaces, then press ENTER
	
	scanf("%d", &values[0] );
	scanf("%d", &values[1] );
	scanf("%d", &values[2] );
	
	min = Minimum(values);
	printf("The minimum of %d, %d, and %d is %d.", values [0],values[1], values[2], min);
	printf("\nThe sum of the cubes from 1 to %d is %d", min, Sum_Of_Cubes(min));

return 0;

}//end of main method

int Minimum(int values[]) {
	int min = values[0];
	for(int i = 1; i < 3; i++){
		if (values[i] < min) {
			min = values[i];
		}
	}
	return min;
}//end of Minimum function defintion


int Sum_Of_Cubes(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += (i*i*i);
	}
	return sum;
}//end of function definition