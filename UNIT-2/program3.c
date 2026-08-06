#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], stack[100];
    int i, top=-1;

    printf("Enter String : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
        stack[++top]=str[i];

    printf("Reverse String : ");

    while(top!=-1)
        printf("%c",stack[top--]);

    return 0;
}
