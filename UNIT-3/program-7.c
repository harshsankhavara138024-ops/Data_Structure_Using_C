#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev,*next;
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
        newnode->prev=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
}

void insert_after()
{
    int key;

    printf("Enter Node After Which Insert : ");
    scanf("%d",&key);

    temp=head;

    while(temp!=NULL && temp->data!=key)
        temp=temp->next;

    if(temp==NULL)
        return;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    newnode->prev=temp;

    if(temp->next!=NULL)
        temp->next->prev=newnode;

    temp->next=newnode;
}

void insert_before()
{
    int key;

    printf("Enter Node Before Which Insert : ");
    scanf("%d",&key);

    temp=head;

    while(temp!=NULL && temp->data!=key)
        temp=temp->next;

    if(temp==NULL)
        return;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    newnode->next=temp;
    newnode->prev=temp->prev;

    if(temp->prev!=NULL)
        temp->prev->next=newnode;
    else
        head=newnode;

    temp->prev=newnode;
}

void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    create();
    insert_after();
    insert_before();
    display();

    return 0;
}
