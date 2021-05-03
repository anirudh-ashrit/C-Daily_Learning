#include<stdio.h>
#include<string.h>

#define PART1

#ifdef PART1
char string_compare(char str_1[], char str_2[]) {

    int i = 0, value = 0;

    while(str_1[i] != '\0' || str_2[i] != '\0') {
       
        if(str_1[i] == str_2[i]) {
            i++;
        }
        else if((str_1[i] == '\0' && str_2[i] != '\0') || (str_1[i] != '\0' && str_2[i] == '\0')
        || (str_1[i] != str_2[i])) {
            value = 1;
            break;
        }
    }
    return value;
}

void main() {

    char string_1[100], string_2[100];
    int comparision;

    printf("Enter the string 1: ");
    gets(string_1);
    printf("Enter the string 2: ");
    gets(string_2);
    
    comparision = string_compare(string_1, string_2);

    if(comparision)
        printf("Strings are not equal");
    else
        printf("Strings are equal");

}
#endif

#ifdef PART2

#define str_size 100 //Declare the maximum size of the string
int test(char* s1, char* s2)
{
         int flag = 0;
         while (*s1 != '\0' || *s2 != '\0') {
                  if (*s1 == *s2) {
                            s1++;
                            s2++;
                  }
                    else if ((*s1 == '\0' && *s2 != '\0')
                                     || (*s1 != '\0' && *s2 == '\0')
                                     || *s1 != *s2) {
                            flag = 1;
                            break;
                  }
         }
  return flag;
}
int main(void)
{
char str1[str_size], str2[str_size];
   int flg=0;
   printf("\nInput the 1st string : ");
   fgets(str1, sizeof str1, stdin);
   printf("Input the 2nd string : ");
   fgets(str2, sizeof str2, stdin);          
   printf("\nString1: %s", str1);
   printf("String2: %s", str2);
   flg = test(str1, str2);
    if(flg == 0)
   {
       printf("\nStrings are equal.\n");
   }
   else if(flg == 1)
   {
      printf("\nStrings are not equal.");
   }
         return 0;
}
#endif