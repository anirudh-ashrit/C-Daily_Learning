/**
 *
 *                 
 *          FACTORIAL
 * 
 * 
**/

#include <stdio.h>

int factorial(int num){

    int factorial_number;
    
    if (num == 0)
       return 1;
    factorial_number = num * factorial(num - 1);
    return factorial_number;
}

void main(){

    int number;

    printf("Enter the number: ");
    scanf("%d\n", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

}