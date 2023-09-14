#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a substring: ");
    fgets(substr, sizeof(substr), stdin);

    int len = strlen(substr);
    for(int i = 0; str[i] != '\0'; i++) {
        if (strncmp(str+i, substr, len) == 0) {
            count++;
        }
    }

    printf("The substring '%s' occurs %d times in '%s'.\n", substr, count, str);
    return 0;
}
