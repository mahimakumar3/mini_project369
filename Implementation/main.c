
#include "inc/calculator.h"
#define KEY "Enter the calculator Operation you want to do:"
#include<stdio.h>

#include <stdlib.h>

int main()
{
    int X = 1;
    char Calc_oprn;

    // Function call
    calculator_operations();

    while (X)
    {
        float res;
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn = getchar();

        switch (Calc_oprn)
        {
        case '+':
            res = addition();
            break;

        case '-':
            res = subtraction();
            break;

        case '*':
            res = multiplication();
            break;

        case '/':
            res = division();
            break;

        case '!':
            res = factorial();
            break;

        case '^':
            res = power();
            break;

        case 'H':
        case 'h':
            calculator_operations();
            break;

        case 'Q':
        case 'q':
            exit(0);
            break;
        case 'c':
        case 'C':
            system("cls");
            calculator_operations();
            break;

        default:
            system("cls");

            printf("\n**********You have entered unavailable option");
            printf("***********\n");
            printf("\n*****Please Enter any one of below available ");
            printf("options****\n");
            calculator_operations();
        }
        printf("OUTPUT= %.2f", res);
		X--;
    }
}
