#include <stdio.h>

int main() {

int n;

printf("enter the size of array: ");
scanf("%d" , &n);

int N = n+1;
int arr[100];
printf("enter %d integers which belong to a consecuive number range\n" , n);
for (int i=0 ; i<n ; i++) {
scanf("%d" , &arr[i]); 
}

printf("array: ");
for (int i=0 ; i<n ; i++) {
    printf("%d " , arr[i]);
}

int sum1=0;
for (int i=0 ; i<n; i++) {
    sum1 += arr[i];
}


int sum2 = N*(N+1)/2 ;
int m = (sum2 - sum1) ;
printf("\nmissing no : %d" , m);

return 0;
}
