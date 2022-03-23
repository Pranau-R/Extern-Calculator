/*

Module: mul.c

Function:
    To multiply user entered two numbers and store the value in result.

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

Name: mul()

Function:
    To multiply user entered two numbers and store the value in result.

Definition:
    void mul (void);

Description:
    It has no return value and no arguments

Returns:
    Functions returning type void: nothing.

*/

void mul ()
    {
    float result;

    result = num1 * num2;

    printf("The Multiplication of two numbers is: %.2f\n", result);
    }