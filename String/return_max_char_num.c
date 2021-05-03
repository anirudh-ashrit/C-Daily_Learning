#include<stdio.h>
#include<string.h>

#define part2

#ifdef part1
char return_max(char str[]) {

    int count[256] = {0};
    int i = 0, max = 0;
    char result;

    for(i; i < strlen(str); i++) {
        count[str[i]]++;
        if(max < count[str[i]]){
            max = count[str[i]];
            result = str[i];
        }
    }
    printf("%c\n", count[0]);
    return result;
} 

void main() {

    char string[] = "test";
    //printf("Enter the string: ");
    //gets(string);

    printf("The most occuring character is: %c\n", return_max(string));
}
#endif

#ifdef part2

int return_max(int num[], int sz) {

    int i = 0, max = 0, c_max = 0, 
    result, count[100] = {0};

    for(i; i < sz; i++) {
        count[num[i]]++;
        if(max < count[num[i]]) {
            max = count[num[i]];
            result = num[i];
        }
    }
    c_max = count[0];
    for(int j = 1; j < 100; j++) {
        if(c_max <= count[j]){
            c_max = count[j];
            printf("%d\n", j);
        }
    }
}

void main() {

    int num_array[] = {1,25,35,56};
    //printf("Enter the string: ");
    //gets(string);

    int size = (sizeof(num_array)/sizeof(num_array[0]));

    return_max(num_array, size);
}
#endif
