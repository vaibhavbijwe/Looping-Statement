#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("Enter a NO ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        sum +=i;
    }
    printf("Sum of all even No 1 to %d : %d",n,sum);
}