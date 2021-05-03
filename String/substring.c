#include<stdio.h>
#include<string.h>

void substring(char str[], int pos, int len) {

    char subs[len];
    int i = 0;

    for(i; i < len; i++) {
        subs[i] = str[pos-1];
        pos++;
    }

    subs[i] = '\0';
    printf("The substring is %s", subs);
}

void main() {

    char string[] = "";
    int position, length;

    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the length: ");
    scanf("%d", &length);

    substring(string, position, length);

}