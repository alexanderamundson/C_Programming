//Alexander Amundson Lab4 CS3335

#include<stdio.h>

int main() {
	//part a)
	for (int r = 1; r < 6; r++) {
		for (int p = 5; p > r; p-- )
			printf(". ");
			for (int n = 0; n < r; n++ )
				printf("%d ", r );
				for (int z = 0; z < 1; z++)
					printf("\n");
	}
	//part b)
	for (int r = 0; r < 5; r++) {
		for ( int c = r; c < 4; c++ )
			printf(". ");
			for( int i = 0; i < 1; i++)
				printf("%d", (r+1) );
				for(int j = 0; j < r; j++)
					printf(". ");
					for(int q = 0; q < 1; q++)
						printf("\n");
	}
	return 0;
}