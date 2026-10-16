#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*newnode;

void create()
{
    int n,i;

    printf("Enter Number of Nodes : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter Data : ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display()
{
    temp=head;

    printf("Linked List : ");

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    create();
    display();

    return 0;
}
