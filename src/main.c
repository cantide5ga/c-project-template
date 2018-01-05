#include <stdio.h>

int addTen(int number) {
	int x;

	x = number + 10;
	return (x);
}

int main (int argc, char *argv[]) {
	printf("%d", addTen(10));
    return 0;
}
