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
int r;
for (int i=0 ; i<n/2 ; i++) {
    r = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = r;
}
printf("\nupdated array: ");
for (int i=0 ; i<n ; i++) {
    printf("%d " , arr[i]);


}
