/**
 * 
 *    Reverse a string
 * 
 * 
*/

// #include <stdio.h>
// #include <string.h>

// void main(){

//     char string[] = "Eternal Vigilence is the price of Liberty";
//     int size = strlen(string);
//     char string_reverse[size];
//     int i, loop_size = size;

//     printf("%d\n", size);
    
//     for (i = 0; i < loop_size; i++){
//         string_reverse[i] = string[size-1];
//         size--;
//     }

//     printf("%d\n", size);
//     string_reverse[i] = '\0';
//     printf("%s", string_reverse);

// }

#include<stdio.h>
#include<string.h>

char string_reverse(char str[], int size) {

    char reverse[size];
    int i, loop_size = size;

    for (i = 0; i < loop_size; i++, size--){
        reverse[i] = str[size-1];
    }

    reverse[i] = '\0';

    printf("%s\n", reverse);
}

void main(){

    char string[] = "Eternal Vigilence is the price of Liberty";
    int size = strlen(string);

    string_reverse(string, size);
}
