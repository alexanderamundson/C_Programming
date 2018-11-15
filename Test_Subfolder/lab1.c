/*Alexander Amundson Lab1 CS3335*/

#include<stdio.h>



#include<math.h>
int main()

{
  float scores[30];
	
int x, y;
   printf( "Enter x, y: ");
   scanf("%d%d", &x, &y);

  int i, j, k, l;

  i = 1;
  j = 0;
  k = 0;
  l = 1;

  while ( x != y ){

    if ( x > y ){
      x = x - y;
      i = i - k;
      j = j - l;
    }
    else {
      y = y - x;
      k = k - i;
      l = l - j;
    }

  }
  printf("X is %d", x);
	return 0;

}
