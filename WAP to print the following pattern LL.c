#include <stdio.h>
/// @brief 
void main()
{
    int i,j,n=1;
	int rows = 5;
    char c='A';

	for (i = 0; i <= rows; i++) {
		for (j = 0; j <= i; j++)
        {
            printf("%d",n++);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i <= rows; i++) 
    {
		for (j = 0; j <= i; j++)
        {
            printf("%c",c++);
        }
        printf("\n");
    }
}

