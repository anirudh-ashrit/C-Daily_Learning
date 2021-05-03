#include<stdio.h>
#include<string.h>

void concat(char str_1[], char str_2[]) {

    int i, j, len;
    len = strlen(str_1) + strlen(str_2);
    char cat[len];

    for(i = 0; i < strlen(str_1); i++) {
        if(str_1[i] != '\0')
            cat[i] = str_1[i];
    }

    cat[i++] = ' ';

    for(j = 0; j < strlen(str_2); j++, i++) {
        if(str_2[j] != '\0')
            cat[i] = str_2[j];
    }

    cat[i] = '\0';

    printf("Concatetanted String is: %s\n", cat);

}

void main() {

    char string_1[100], string_2[100];

    printf("Enter String 1: ");
    gets(string_1);
    printf("Enter String 2: ");
    gets(string_2);

    concat(string_1, string_2);
}