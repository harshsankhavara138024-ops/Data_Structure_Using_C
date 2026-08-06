#include<stdio.h>

int main()
{
    int stack[100], top=-1;
    int n,i,fact=1;

    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        stack[++top]=i;

    while(top!=-1)
        fact=fact*stack[top--];

    printf("Factorial = %d",fact);

    return 0;
}
