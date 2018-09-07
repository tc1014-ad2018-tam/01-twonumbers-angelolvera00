/*
 * This program is made to solve an operation with 2 numbers given
 *
 * Author: Angel Olvera
 * August 23, 20118
 * Mail: angelolvera00@gmail.com
 */

#include <stdio.h>

int main() {
    //Variables are declared

    double number1;
    double number2;
    double sum;
    double subtraction;
    double division;
    double multiplication;

    //The user is asked to enter the numbers
    printf("Enter the first number: ");
    scanf("%lf", &number1);
    printf("Enter the second number: ");
    scanf("%lf", &number2);

    //The operation is performed
    sum = number1 + number2;
    subtraction = number1 - number2;
    division = number1 / number2;
    multiplication = number1 * number2;


    //The result is given

    printf("The sum is = %lf\n", sum);
    printf("The subtraction is = %lf\n", subtraction);
    printf("The division is = %lf\n", division);
    printf("The multiplication is = %lf\n", multiplication);

    return 0;
}