#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*newnode,*ptr;

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

void insert_after()
{
    int key;

    printf("Enter Node After Which Insert : ");
    scanf("%d",&key);

    temp=head;

    while(temp!=NULL && temp->data!=key)
        temp=temp->next;

    if(temp==NULL)
    {
        printf("Node Not Found\n");
        return;
    }

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    temp->next=newnode;
}

void insert_before()
{
    int key;

    printf("Enter Node Before Which Insert : ");
    scanf("%d",&key);

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    if(head->data==key)
    {
        newnode->next=head;
        head=newnode;
        return;
    }

    ptr=head;
    temp=head->next;

    while(temp!=NULL && temp->data!=key)
    {
        ptr=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Node Not Found\n");
        return;
    }

    newnode->next=temp;
    ptr->next=newnode;
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

    insert_after();

    insert_before();

    display();

    return 0;
}
