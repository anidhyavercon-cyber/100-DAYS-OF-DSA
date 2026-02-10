#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0') {
        count++;
    }       
                    {
for (int i = count-1 ; i >= 0 ; i--)
    printf("%c", str[i]);
    }
    return 0;
}
