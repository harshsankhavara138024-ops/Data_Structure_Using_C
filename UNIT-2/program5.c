#include<stdio.h>

int main()
{
    int stack[100], top=-1;
    int n,p,i,ans=1;

    printf("Enter Number : ");
    scanf("%d",&n);

    printf("Enter Power : ");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
        stack[++top]=n;

    while(top!=-1)
        ans=ans*stack[top--];

    printf("Answer = %d",ans);

    return 0;
}
