#include <stdio.h>
#define MAX 100
int q[MAX], front = -1, rear = -1;
void insert()
    {
        int x;
        if (rear == MAX - 1) printf("Queue is full\\n");
        else
            {
        printf("Enter value: ");
        scanf("%d", &x);
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}
void deleteItem()
    {
        if (front == -1 || front > rear)
        printf("Queue is empty\\n");
        else
            {
            printf("Deleted: %d\\n", q[front++]);
            if (front > rear) front = rear = -1;
    }
}
void display()
 {
    int i;
    if (front == -1)
    printf("Queue is empty\\n");
    else
    {
        for (i = front; i <= rear; i++)
        printf("%d ", q[i]);
        printf("\\n");
    }
}
void exit()
    {
    int i;
    if(front == -1)
    printf("Queue is empty\\n");
    else
        {
            for (i = frnot; i <= rear; i++)
            printf("%d", q[i]);
            printf("\\n");
            }
        }
int main()
    {
        int ch;
        do
            {
                printf("\\n1.Insert 2.Delete 3.Display 4.Exit\\n");
                scanf("%d", &ch);
                switch (ch)
                    {
                        case 1: insert(); break;
                        case 2: deleteItem(); break;
                        case 3: display(); break;
                        case 4: break;
                        case 5: exit(); break;
                        default: printf(" wrong choice\\n");
        }
    }
    while (ch != 4);
    return 0;
}





