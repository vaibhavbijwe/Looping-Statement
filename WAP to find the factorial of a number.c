#include<stdio.h>
long factorial(int n){
    if(n==0)
    return 1;
    else
    return (n*factorial(n-1));
}
int main()
{
    int n;
    long fact;
    printf("Enter a no \n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}