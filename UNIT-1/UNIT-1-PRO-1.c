#include <stdio.h>

int main() {
    int arr[10], i, key, found = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element found at position %d.\n", i + 1);
            break;
        }
    }

    if(found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}
