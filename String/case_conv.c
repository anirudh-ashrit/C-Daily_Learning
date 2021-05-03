#include<stdio.h>
#include<string.h>
#include<ctype.h>

void case_conv(char str[]) {

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = toupper(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
    }

    printf("String is: %s", str);
}

void main() {

    char string[100];

    printf("Enter the string: ");
    gets(string);

    case_conv(string);
}