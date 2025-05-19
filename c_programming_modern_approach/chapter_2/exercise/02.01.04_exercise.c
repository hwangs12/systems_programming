/**
 * Write a program that declares several int and float
 * variables -- without initializing them
 * and then prints their values.
 * Is there any pattern to the values?
 */

#include <stdio.h>

int main(void)
{
    int int1;
    int int2;
    int int3;
    int int4;
    int int5;
    int int6;
    int int7;
    int int8;
    int int9;
    int int10;
    int int11;
    int int12;
    int int13;
    int int14;
    float float1;
    float float2;
    float float3;
    float float4;
    float float5;
    float float6;

    printf("%d\n", int1);
    printf("%d\n", int2);
    printf("%d\n", int3);
    printf("%d\n", int4);
    printf("%d\n", int5);
    printf("%d\n", int6);
    printf("%d\n", int7);
    printf("%d\n", int8);
    printf("%d\n", int9);
    printf("%d\n", int10);
    printf("%d\n", int11);
    printf("%d\n", int12);
    printf("%d\n", int13);
    printf("%d\n", int14);
    printf("%f\n", float1);
    printf("%f\n", float2);
    printf("%f\n", float3);
    printf("%f\n", float4);
    printf("%f\n", float5);
    printf("%f\n", float6);

    return 0;
}

/**
 * COMPILE AND RUN SEVERAL TIMES AND THESE ARE THE RESULTS I GOT
 * 4948144
 * 2
 * 4947992
 * 1
 * 1864069288
 * 268435455
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 *
 * 4948144
 * 2
 * 4947992
 * 1
 * 1799057576
 * 268435455
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 *
 * 4948144
 * 2
 * 4947992
 * 1
 * 1835331752
 * 268435455
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 *
 * PATTERN OBSERVED
 * - FLOATS SEEMS TO KEEP DISPLAYING THE SAME VALUE
 * 0.000000
 * - FIRST 4 INT VALUES DON'T SEEM TO CHANGE AFTER COUPLE OF RUNNING
 * - LAST ONE DOESN'T CHANGE EITHER
 * - ONLY THE SECOND FROM LAST ONE
 *
 * AFTER COMPILING AGAIN THEN RUNNING 3 TIMES..
 *
 * 4948144
 * 2
 * 4947992
 * 1
 * 1832612008
 * 268435455
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 *
 * SAME BEHAVIOR AFTER
 *
 * QUESTION: IS IT ALWAYS SECOND FROM LAST THAT'S CHANGING ITS VALUE?
 * OR EVERY FIFTH INT VARIABLE?
 *
 * MY ASSUMPTION THAT FLOAT WILL FOREVER BE 0 WAS WRONG
 * WELL IT WASN'T MY ASSUMPTION BUT WE CAN OBSERVE
 *
 * 4948144
 * 2
 * 4947992
 * 1
 * 1831841960
 * 268435455
 * 644566
 * 2
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 3398446317030657308391112704.000000
 * 0.000000
 *
 * WOW THAT'S A BIG VALUE
 * YEAH AND FOR INT, IT SEEMS ONLY 5TH VALUE
 * THAT'S KEEP CHANGING HUH
 *
 * AFTER 14 INT INITIALIZATIONS
 * 4948144
 * 2
 * 4947992
 * 1
 * 1863659688
 * 268435455
 * 644566
 * 2
 * 4947992
 * 2
 * 4948304
 * 1
 * 1863660048
 * 0
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 0.000000
 * 
 * IT SEEMS ONLY 5TH AND 13TH VALUE
 * KEEP CHANGING AND THEIR 
 * NUMBER OF DIGITS AND FIRST FEW DIGITS
 * ALWAYS MATCH
 */