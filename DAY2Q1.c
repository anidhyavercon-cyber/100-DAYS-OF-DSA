#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position to delete (0-based): ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 0;
    }

    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    n--;   

    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

