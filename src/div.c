/*

Module: div.c

Function:
    To compare and find bigger number from the user entered two numbers, then to divide 
    the bigger number(divident) by smaller number(divisor) and store the value in result.

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
#include "arith.h"

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: division()

Function:
    To compare and find bigger number from the user entered two numbers, then to divide 
    the bigger number(divident) by smaller number(divisor) and store the value in result.

Definition:
    float division (float num1, float num2);
    
Parameter and Arguments:
    float num1 and float num2 are two arguments used to pass float value inside this function.

Description:
    It is a float function and returns integer of float type.

Returns:
    Functions returning type float: integers.

*/

float division (float num1, float num2)
    {
    float result;

    printf("---You Selected Divison---\n");

    printf("Enter a Number: ");
    scanf("%f", &num1);

    printf("Enter another Number: ");
    scanf("%f", &num2);

    if (num1 > num2)
        {
        result = num1 / num2;
        }
    else
        {
        result = num2 / num1;
        }

    printf("The Division of two numbers is: %.2f\n", result);
    }