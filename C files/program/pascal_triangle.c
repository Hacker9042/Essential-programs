#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows to print: ");
    scanf("%d", &n);

    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int s=1; s<=n-i; s++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
