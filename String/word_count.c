#include<stdio.h>

char word_count(char str[]) {

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }
    count++;
    printf("Number of words in string are %d", count);
}

void main() {

    char string[] = "";

    printf("Enter the string: ");
    gets(string);
    word_count(string);
}