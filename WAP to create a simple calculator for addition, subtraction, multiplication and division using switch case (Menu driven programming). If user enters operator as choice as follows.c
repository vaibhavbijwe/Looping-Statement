#include<stdio.h>
void main()
{
    char op;
    int a,b;
    printf("Enter a Arithmatic Operator ");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("Enter a two no \t");
        scanf("%d%d",&a,&b);
        a=a+b;
        printf("Addtion of two no is\n %d",a);
        break;
    case '-':
        printf("Enter a two no \t");
        scanf("%d%d",&a,&b);
        a=a-b;
        printf("Substration of two no is \n %d",a);
        break;
    case '*':
        printf("Enter a two no \t");
        scanf("%d%d",&a,&b);
        a=a*b;
        printf("Multiplication of two no is \n %d",a);
        break;
    case '/':
        printf("Enter a two no \t");
        scanf("%d%d",&a,&b);
        a=a/b;
        printf("Divison of two no is \n %d",a);
        break;
    
    default:
     printf("Incorrect output\t");
        break;
    }
}