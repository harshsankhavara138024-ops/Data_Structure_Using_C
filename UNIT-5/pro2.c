#include <stdio.h>
    int a[20][20], visited[20], n;
    void dfs(int v)
        {
            int i;
            visited[v]=1;
            printf("%d ",v);
            for(i=0;i<n;i++)
            if(a[v][i] && !visited[i]) dfs(i);
        }
        int main()
            {
                int i,j,start;
                printf("Enter number of vertices: ");
                scanf("%d",&n);
                printf("Enter adjacency matrix:\\n");
                for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
                printf("Enter starting vertex (0 to %d): ",n-1);
                scanf("%d",&start);
                if(start<0 || start>=n) return 0;
                printf("DFS: "); dfs(start);
        return 0;
}
