#include <stdio.h>

int main() {

int n;
printf("enter the size of array: ");
scanf("%d" , &n);

int arr[100];
printf("enter %d integers\n" , n);
for (int i=0 ; i<n ; i++) {
scanf("%d" , &arr[i]); 
};
printf("array: ");
for (int i=0 ; i<n ; i++) {
    printf("%d " , arr[i]);
}

int e;
int i = 0;
printf("\nenter the number to search: ");
scanf("%d" , &e);
while (i<n) {
    if (arr[i] == e) {
        printf("Element found at %d\n" , i);
        printf("Comparision count: %d", i+1);
        break;
    }
    i++;
    if (i == n) {
        printf("NOT FOUND");
}
}

return 0;

}

