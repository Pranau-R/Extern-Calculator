/*

Module: add.c

Function:
    To add user entered two numbers and store the value in result.

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

Name: add()

Function:
    To add user entered two numbers and store the value in result.

Definition:
    void add (void);

Description:
    It has no return value and no arguments

Returns:
    Functions returning type void: nothing.

*/

void add ()
    {
    /*float result;

    printf("---You Selected Addition---\n");

    printf("Enter a Number: ");
    scanf("%f", &num1);

    printf("Enter another Number: ");
    scanf("%f", &num2);*/

    //result = num1 + num2;

    float num1, num2, result;

    result = num1 + num2;
    printf("The addition of two numbers is: %.2f\n", result);
    }