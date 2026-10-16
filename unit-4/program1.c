#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* create()
{
    int x;
    struct node *newnode;

    printf("Enter Data (-1 for No Node): ");
    scanf("%d",&x);

    if(x==-1)
        return NULL;

    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=x;

    printf("Left Child of %d\n",x);
    newnode->left=create();

    printf("Right Child of %d\n",x);
    newnode->right=create();

    return newnode;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
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

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    struct node *root;

    root=create();

    printf("\nPreorder : ");
    preorder(root);

    printf("\nInorder : ");
    inorder(root);

    printf("\nPostorder : ");
    postorder(root);

    return 0;
}
