#include<stdio.h>

int main()
{
    int n,i;

    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Smallest Common Divisor = %d",i);
            break;
        }
    }

    return 0;
}
