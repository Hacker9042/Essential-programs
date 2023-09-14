// #include <stdio.h>

// int main() {
//     int i, j;
//     int a[3][3];
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("enter the number");
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             if(j == 1 || i == 1)
//                 printf("%d ",a[i][j]);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, k = 0, l = 0, m = 3, n = 3;

    while (k < m && l < n) {
        for (i = l; i < n; i++) {
            printf("%d ", matrix[k][i]);
        }
        k++;

        for (i = k; i < m; i++) {
            printf("%d ", matrix[i][n-1]);
        }
        n--;

        if (k < m) {
            for (i = n-1; i >= l; i--) {
                printf("%d ", matrix[m-1][i]);
            }
            m--;
        }

        if (l < n) {
            for (i = m-1; i >= k; i--) {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }

    return 0;
}
