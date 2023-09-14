#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int vowels=0, consonants=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
        {
            switch(tolower(str[i]))
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}