// Write the C program to Sort Elements in Lexicographical Order (Dictionary Order)

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void bubbleSortLexico(char arr[][MAX_SIZE], int n) {
    int i, j;
    char temp[MAX_SIZE];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n, i;
    char arr[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubbleSortLexico(arr, n);

    printf("Strings in lexicographical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
