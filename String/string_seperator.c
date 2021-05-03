#include<stdio.h>
#include<string.h>

#define PART1

#ifdef PART1
char string_separate(char str[]) {

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' ')
            printf("%c ", str[i]);
    }
}

void main() {

    char string[] = "";

    printf("Enter the String: ");
    gets(string);
    string_separate(string);
}
#endif

#ifdef PART2
char string_separate(char str[]) {

    for(int i = 0; i < strlen(str); i++){
        if(str[i] != ' ' && i != strlen(str))
            printf("%c ", str[i]);
    }
}

void main() {

    char string[] = "";

    printf("Enter the String: ");
    gets(string);
    string_separate(string);
}
#endif

#ifdef STRING_SEP_REV

char string_separate(char str[]) {

    for(int i = strlen(str); i >= 0; i--){
        if(str[i] != ' ')
            printf("%c ", str[i]);
    }
}

void main() {

    char string[] = "";

    printf("Enter the String: ");
    gets(string);
    string_separate(string);
}

#endif