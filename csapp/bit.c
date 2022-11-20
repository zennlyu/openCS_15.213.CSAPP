#include <stdio.h>

int bitXor(int x, int y);
int tmin(void);
int isTmax(int x);


int main(int argc, char const *argv[])
{
	int x = bitXor(4,4);
    int y = isTmax(5);
	printf("%d\n", y);
	return 0;
}

/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
	return x^y;
  // return ~(~x&~y)&~(x&y);
}

int tmin(void) {
  return 1<<31;
}

int isTmax(int x) {
  return !((~(x+1)^x))&!!(x+1);
}



