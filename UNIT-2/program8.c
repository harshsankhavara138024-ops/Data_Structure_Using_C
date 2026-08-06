#include<stdio.h>

int max(int a[],int n)
{
    if(n==1)
        return a[0];

    int m=max(a,n-1);

    if(a[n-1]>m)
        return a[n-1];
    else
        return m;
}

int min(int a[],int n)
{
    if(n==1)
        return a[0];

    int m=min(a,n-1);

    if(a[n-1]<m)
        return a[n-1];
    else
        return m;
}

int main()
{
    int a[5],i;

    printf("Enter 5 Numbers : ");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Maximum = %d\n",max(a,5));
    printf("Minimum = %d",min(a,5));

    return 0;
}
