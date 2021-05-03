#include<stdio.h>

char count_chars(char str[]) {

    int alph = 0, num = 0, sc = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alph++;
        else if(str[i] >= '0' && str[i] <= '9')
            num++;
        else
            sc++;
    }
    printf("The number of Alphabets are: %d\n", alph);
    printf("The number of Numbers are: %d\n", num);
    printf("The number of Special Characters are: %d\n", sc);
}

void main() {

    char string[] = "";

    printf("Enter the string: ");
    gets(string);
    count_chars(string);
}