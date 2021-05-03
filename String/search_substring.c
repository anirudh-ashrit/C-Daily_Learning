#include<stdio.h>
#include<string.h>

#define part1

#ifdef part1
void sub_search(char str[], char subs[]) {

    int i, j, len;

    len = strlen(subs);

    for(i = 0, j = 0; (str[i] != '\0') && (subs[j] != '\0'); i++) {
        if(str[i] == subs[j])
            j++;
        else j = 0;
    }

    if(j == len)
        printf("Substring found at number %d", i-j+1);
    else printf("Substring not found");


}

void main() {

    char string[100], search[50];

    printf("Enter the string: ");
    gets(string);
    printf("Enter the substring: ");
    gets(search);

    sub_search(string, search);
}
#endif

#ifdef part2
int main()
{
    char str1[80], str2[80];
    int l, i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    //finding length of second string
    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Substring found at position %d", i - j + 1);
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}
#endif