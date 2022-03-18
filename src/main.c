/*

Module: main.c

Function:
    To display an user interactive Menu for simple calculator using switch cases.

Copyright notice:
    This file copyright (C) 2022 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Pranau R, MCCI Corporation   March 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include "arith.h"

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: main()

Function:
    To display an user interactive Menu for simple calculator using switch cases.

Definition:
    float main (void);

Description:
    It is a float function and returns integer of float type.

Returns:
    Functions returning type float: integers.

*/

float main()
    {
    float num1, num2;

    float add(float num1, float num2);
    float sub(float num1, float num2);
    float mul(float num1, float num2);
    float division(float num1, float num2);

    int ch;

    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("This is simpleCalculator.exe v1.0.0\n");
    printf("-----------------------------------------------------\n");
    printf("\n");
    printf("======== MENU ======== \n");
    printf("1. Addition: \n");
    printf("2. Subtraction: \n");
    printf("3. Multiplication: \n");
    printf("4. Division: \n");
    printf("5. Exit: \n");
    printf("\n");

    while(1)
        {
        printf("\nEnter the Choice: \n");
        scanf("%d", &ch);

        switch(ch)
            {
            case 1:
                {
                add(num1, num2);
                break;
                }
            case 2:
                {
                sub(num1, num2);
                break;
                }
            case 3:
                {
                mul(num1, num2);
                break;
                }
            case 4:
                {
                division(num1, num2);
                break;
                }
            case 5:
                exit(0);

            default:
                printf("Invalid Entry!!!\n\n");
            }
        }
    }