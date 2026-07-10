#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10];
    int i;
    printf("enter 10 values\n");


    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    }


     printf("10 values are\n");

     for(i=0;i<=9;i++)
    {
    printf("%d\n",a[i]);
    }



    getch();
}

