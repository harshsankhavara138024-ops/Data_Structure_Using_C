#include <stdio.h>

int main()
{
    int a[10];
    int i, search, found = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nArray Elements are:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
