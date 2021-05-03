#include <stdio.h>
#include <string.h>
void main() {
    
    char name[25][50],temp[25];
    int n,i,j;

    printf("Input number of strings :");
    scanf("%d",&n);

    for(i = 0; i <= n; i++) {
        //scanf("%s", name[i]);
        fgets(name[i], sizeof name, stdin);
    }

    for(int k = 0; k < n-1; k++) {
        for(int l = i+1; l < n; l++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[i], temp[i]);
            }
        }
    }

    printf("Sorted string is:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", name[i]);

}