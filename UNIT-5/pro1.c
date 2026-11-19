#include <stdio.h>
 int main()
    {
        int a[20][20], visited[20]={0}, q[20];
        int n,i,j,start,front=0,rear=0,v;
        printf("Enter number of vertices: ");
        scanf("%d",&n);
        printf("Enter adjacency matrix:\\n");
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        printf("Enter starting vertex (0 to %d): ",n-1);
        scanf("%d",&start);
        if(start<0 || start>=n) return 0;
        visited[start]=1; q[rear++]=start;
        printf("BFS: ");
        while(front<rear)
            {
                v=q[front++]; printf("%d ",v);
                for(i=0;i<n;i++)
                if(a[v][i] && !visited[i])
                    {
                        visited[i]=1; q[rear++]=i;
                    }
            }
        return 0;
}
