/*

Module: mul.c

Function:
    To multiply given two float intergers and store the value in result.

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

Name: mul()

Function:
    To multiply given two float intergers and store the value in result.

Definition:
    float mul (float num1, float num2);
    
Parameter and Arguments:
    float num1 and float num2 are two arguments used to pass float value inside this function.

Description:
    It is a float function and returns integer of float type.

Returns:
    Functions returning type void: float.

*/

float add (float num1, float num2)
    {
    printf("---You Choose Multiplicaton---");

    printf("Enter Number 1: %.2f");
    scanf("%.2f", &num1);

    printf("Enter Number 2: %.2f");
    scanf("%.2f", &num2);

    result = num1 + num2;

    printf("The Multiplication of two numbers is: %.2f", result);
    }