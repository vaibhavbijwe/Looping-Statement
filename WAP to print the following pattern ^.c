#include <stdio.h>
void main()
{
    int i,j;
	int rows = 10;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
