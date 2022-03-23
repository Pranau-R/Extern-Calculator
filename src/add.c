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

#include "arith.h"

/****************************************************************************\
|
|   Global Variables.
|
\****************************************************************************/

extern float num1, num2, result;

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
    result = num1 + num2;
    }