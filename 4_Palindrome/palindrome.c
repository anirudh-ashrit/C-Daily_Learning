#include<stdio.h>
#include<string.h>

int check_palindrome(char *comparision)
{
    int size = strlen(comparision), j = 0;
    char palindrome[size];

    for(int i = size; i >= 0; i--)
    {
        palindrome[j] = comparision[i - 1];
        j++;
    }

    palindrome[j] = '\0';

    return strcmp(palindrome, comparision);

}

void main()
{
    int remainder, number, i = 0;
    char string[100];

    printf("\nEnter the number: ");
    scanf("%d", &number);

    while(number < 0)
    {
        remainder = number % 10;
        string[i] = remainder + '0';
        number = number / 10;
        i++;
    }
    
    string[i] = '\0';

    printf("String %s\n", string);

    if(check_palindrome(string))
        printf("The number is not a palindrome\n\n");
    else
        printf("The number is a palindrome\n\n");
}