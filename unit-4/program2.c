#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create(int data)
{
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
        return create(data);

    if(data<root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);

    return root;
}

struct node *minvalue(struct node *root)
{
    while(root->left!=NULL)
        root=root->left;

    return root;
}

struct node *deleteNode(struct node *root,int key)
{
    struct node *temp;

    if(root==NULL)
        return root;

    if(key<root->data)
        root->left=deleteNode(root->left,key);

    else if(key>root->data)
        root->right=deleteNode(root->right,key);

    else
    {
        if(root->left==NULL)
        {
            temp=root->right;
            free(root);
            return temp;
        }

        else if(root->right==NULL)
        {
            temp=root->left;
            free(root);
            return temp;
        }

        temp=minvalue(root->right);

        root->data=temp->data;

        root->right=deleteNode(root->right,temp->data);
    }

    return root;
}

int height(struct node *root)
{
    int l,r;

    if(root==NULL)
        return 0;

    l=height(root->left);
    r=height(root->right);

    if(l>r)
        return l+1;
    else
        return r+1;
}

int totalnode(struct node *root)
{
    if(root==NULL)
        return 0;

    return 1+totalnode(root->left)+totalnode(root->right);
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;

    root=insert(root,50);
    root=insert(root,30);
    root=insert(root,70);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,60);
    root=insert(root,80);

    printf("Inorder : ");
    inorder(root);

    printf("\nHeight = %d",height(root));

    printf("\nTotal Nodes = %d",totalnode(root));

    root=deleteNode(root,20);

    printf("\nAfter Delete : ");
    inorder(root);

    return 0;
}
