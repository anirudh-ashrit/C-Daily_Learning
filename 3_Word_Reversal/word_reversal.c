#include<stdio.h>
#include<string.h>

void main()
{
    char input_array[] = "Life is Life";
    int length = strlen(input_array);
    char reverse_array[length];
    int c = 0, pos = 0;

    printf("%d\n", length);
    while(input_array[c] != '\0')
    {
        if((input_array[c] == ' ') || (c == length-1))
        {
            int count;
            if(c == length - 1)
                count = c;
            else
                count = c - 1;
            while((count >= 0) && (input_array[count] != ' '))
            {
                reverse_array[pos] = input_array[count];
                pos++;
                count--;
            }
            if(pos != length)
            {
                reverse_array[pos] = ' ';
                pos++;
            }
        }
        c += 1;
    }
    reverse_array[pos] = '\0';
    printf("%s\n", reverse_array);
}