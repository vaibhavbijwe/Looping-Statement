#include<stdio.h>
void main()
{
    int c=0,i,n;
    printf("Enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Enter No is prime No ",c);
    }
    else
    {
        printf("Enter No is Not prime ",c);
    }
}