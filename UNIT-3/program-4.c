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

void delete_first()
{
    temp=head;
    head=head->next;
    free(temp);
}

void delete_last()
{
    ptr=head;
    temp=head;

    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }

    ptr->next=NULL;
    free(temp);
}

void delete_specific()
{
    int key;

    printf("Enter Node To Delete : ");
    scanf("%d",&key);

    ptr=head;
    temp=head;

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

    ptr->next=temp->next;
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
