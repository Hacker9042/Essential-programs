// #include <stdio.h>

// int main() {
//    char str[100];
   
//    printf("Enter a string: ");
//    fgets(str, 100, stdin);
   
//    printf("You entered: %s\n", str);
   
//    return 0;
// }
// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void swap_recursively(int *a, int *b, int n) {
//     if (n == 0) {
//         return;
//     }
//     swap(a, b);
//     swap_recursively(a, b, n - 1);
// }

// int main() {
//     int x, y;
//     printf("enter two number: ");
//     scanf("%d %d", &x,&y);
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap_recursively(&x, &y, 3);
//     printf("After swap: x = %d, y = %d\n", x, y);
//     return 0;
// }
// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int n;
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &n);
//     printf("Factorial of %d is %d\n", n, factorial(n));
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// // comparison function for qsort
// int compare(const void *a, const void *b) {
//     int num1 = *(int*)a;
//     int num2 = *(int*)b;
//     if (num1 < num2)
//         return -1;
//     if (num1 > num2)
//         return 1;
//     return 0;
// }

// int main() {
//     int arr[] = {3, 8, 1, 4, 9, 6, 2, 5, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // sort the array using qsort
//     qsort(arr, n, sizeof(int), compare);

//     // print the sorted array
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }
#include<stdio.h>
int main(){ 
   int i, j, temp,n;
   printf("enter the no of elements: ");
   scanf("%d", &n);
   int arr[n];
   
   for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - i - 1; j++) {
         if (arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   for ( i = 0; i < n; i++)
   {
    printf("%d ", arr[i]);
   }
   
   return 0;
}