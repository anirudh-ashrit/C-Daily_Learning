#include<stdio.h>
#include<string.h>

char string_copy(char str[]) {
    
    char copy[strlen(str)];
    int i = 0;

    while(copy[i] = str[i])
        i++;

    copy[i] = '\0';
    printf("The copied string is: %s", copy);
}

void main() {

    char string[] = "";

    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    string_copy(string);
}