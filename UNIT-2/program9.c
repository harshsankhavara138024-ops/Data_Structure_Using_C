#include<stdio.h>
#define SIZE 10

int queue[SIZE];
int front=-1,rear=-1;

void insert()
{
    int x;

    if(rear==SIZE-1)
    {
        printf("Queue Full\n");
        return;
    }

    printf("Enter Element : ");
    scanf("%d",&x);

    if(front==-1)
        front=0;

    rear++;
    queue[rear]=x;
}

void delete()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Deleted Element = %d\n",queue[front]);
    front++;
}

void display()
{
    int i;

    if(front==-1 || front>rear)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Queue Elements : ");

    for(i=front;i<=rear;i++)
        printf("%d ",queue[i]);

    printf("\n");
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice");
        }
    }
}
