#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev,*next;
};

struct node *head=NULL,*temp,*ptr,*newnode;

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

void delete_first()
{
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}

void delete_last()
{
    temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->prev->next=NULL;
    free(temp);
}

void delete_specific()
{
    int key;

    printf("Enter Node To Delete : ");
    scanf("%d",&key);

    temp=head;

    while(temp!=NULL && temp->data!=key)
        temp=temp->next;

    if(temp==NULL)
        return;

    temp->prev->next=temp->next;

    if(temp->next!=NULL)
        temp->next->prev=temp->prev;

    free(temp);
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

    delete_first();

    delete_last();

    delete_specific();

    display();

    return 0;
}
