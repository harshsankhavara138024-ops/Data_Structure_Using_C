#include <stdio.h>

int main()
{
    int a[20], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    printf("Array after deletion:\n");

    for(i = 0; i < n - 1; i++)
        printf("%d ", a[i]);

    return 0;
}
