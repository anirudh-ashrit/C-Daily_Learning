#include<stdio.h>

#define PART1

#ifdef PART1

void main(){

    char string[] = "";

    printf("Enter the String: ");
    scanf("%[^\n]s", &string); // ^\n tells not to take input until new line, %*c reads new line and discards by * 
    printf("The entered string is: %s\n", string);

}

#endif

#ifdef PART2
#define MAX_CHARS 50

void main() {
    
    char string[MAX_CHARS];
    printf("Enter the string: ");
    fgets(string, MAX_CHARS, stdin);
    printf("The string is: %s", string); 
}
#endif

#ifdef PART3
void main(){

    char string[50];
    printf("Enter the string: ");
    scanf("%s", &string);
    printf("The string is: %s", string);
}
#endif

#ifdef PART4
void main(){

    char string[] = "";
    printf("Enter the string: ");
    gets(string);
    printf("The string is: %s", string);
}
#endif