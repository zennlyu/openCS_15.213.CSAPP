#include <stdio.h>

void swap(int x, int y) {
	x ^= y;
	y ^= x;
	x ^= y;
}

int main(int argc, char const *argv[])
{
	int x = 4;
	int y = 5;
	swap(x, y);
	printf("%d, %d\n", x, y);
	return 0;
}
