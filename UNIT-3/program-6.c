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

        newnode->prev=NULL;
        newnode->next=NULL;

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

void insert_begin()
{
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    newnode->prev=NULL;
    newnode->next=head;

    head->prev=newnode;
    head=newnode;
}

void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter Data : ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
    newnode->prev=temp;
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
    insert_begin();
    insert_end();
    display();

    return 0;
}
