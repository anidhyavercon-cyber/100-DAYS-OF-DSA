#include <stdio.h>

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[100];
    printf("enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    printf("enter position to delete (0-based): ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("updated array: ");
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
