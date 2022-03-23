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
|   Global Variables.
|
\****************************************************************************/

extern float num1, num2;

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
    void division (void);

Description:
    It has no return value and no arguments

Returns:
    Functions returning type void: nothing.

*/

void division ()
    {
    float result;

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