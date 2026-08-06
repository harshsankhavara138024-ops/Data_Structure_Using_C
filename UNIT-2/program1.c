#include<stdio.h>
#define SIZE 10

int stack[SIZE];
int top=-1;

void push()
{
    int x;

    if(top==SIZE-1)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter Element : ");
    scanf("%d",&x);

    top++;
    stack[top]=x;
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted Element = %d\n",stack[top]);
    top--;
}

void display()
{
    int i;

    if(top==-1)
    {
        printf("Stack Empty\n");
        return;
    }

    printf("Stack Elements : ");

    for(i=top;i>=0;i--)
        printf("%d ",stack[i]);

    printf("\n");
}

void peek()
{
    if(top==-1)
        printf("Stack Empty\n");
    else
        printf("Top Element = %d\n",stack[top]);
}

void peep()
{
    int pos;

    printf("Enter Position : ");
    scanf("%d",&pos);

    if(top-pos+1<0)
        printf("Invalid Position\n");
    else
        printf("Element = %d\n",stack[top-pos+1]);
}

void change()
{
    int pos,value;

    printf("Enter Position : ");
    scanf("%d",&pos);

    printf("Enter New Value : ");
    scanf("%d",&value);

    if(top-pos+1<0)
        printf("Invalid Position\n");
    else
        stack[top-pos+1]=value;
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Peek");
        printf("\n5.Peep");
        printf("\n6.Change");
        printf("\n7.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                peep();
                break;

            case 6:
                change();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice");
        }
    }
}
