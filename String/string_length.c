#include<stdio.h>

char str_len(char str[]){

    int length = 0;

    while(str[length] != '\0'){
        length++;
    }

    return length;
    //printf("%d", length - 1);
}

void main(){

    char string[] = "";

    printf("Enter the String: ");
    gets(string);
    printf("Length is %d", str_len(string));

}