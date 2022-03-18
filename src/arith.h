/*

Module: arith.h

Function:
    To declare extern variable and extern function for simple arithmetic operations.

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
#ifndef _ARITH_H_
#define _ARITH_H_

/****************************************************************************\
|
|   Global Variable and Functions.
|
\****************************************************************************/

extern float num1, num2, result;
extern float add(float num1, float num2);
extern float sub(float num1, float num2);
extern float mul(float num1, float num2);
extern float division(float num1, float num2);

#endif