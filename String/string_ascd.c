#include<stdio.h>
#include<string.h>
#include<ctype.h>

void string_ascending(char str[]) {

    char asc_str[strlen(str)], max = 0;
    int j;

    for(int i = 0; i < strlen(str); i++){
        asc_str[i] =tolower(str[i]);
    }

    max = asc_str[0];
    for(j = 0; j < (strlen(str) - 1); j++) {
        for(int k = j+1; k < strlen(str); k++){
            if(str[j] > str[k]) {
                int temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
        }
    } 
}